#include <iostream>
#include <string>


using namespace std;

// 필요한 변수 
// 체크용 변수
// 필요한 DNA  개수
void add(char c, int check[]);
bool checks(int check[], int answer[]);
void sliding(int *i, int *j, string DNA, int check[]);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S, P;
    int answer[4] = {};
    string DNA;
    int check[4] = {};
    int start = 0;

    cin >> S >> P;
    int end = P;
    cin >> DNA;
    cin >> answer[0] >> answer[1] >> answer[2] >> answer[3];

    for (int i = 0; i < P; i++) {
        add(DNA[i], check);
    }
    int count = 0;
    if (checks(check, answer)) {
        count++;
    }
  

    for (int i = 0; i < S-P; i++) {
        sliding(&start, &end, DNA, check);
        if (checks(check, answer)) {
            count++;
        }
    }
    cout << count << "\n";
}


// 처음 계산 용 슬라이딩 윈도우 
void add(char c, int check[]) {
    if (c == 'A') {
        check[0]++;
    }
    else if (c == 'C') {
        check[1]++;
    } else if (c =='G') {
        check[2]++;
    } else if (c == 'T'){
        check[3] ++;
    }
}


bool checks(int check[], int answer[]) {
    for (int i = 0; i < 4; i++) {
        if (check[i] < answer[i]) {
            return false;
        }
    }
    return true;

}

// 크기를 유지하고 슬라이딩

void sliding(int *i, int *j, string DNA, int check[]) {
    if (DNA[*j] == 'A') { 
        check[0]++;
    } else if (DNA[*j] == 'C') {
        check[1]++;
    } else if(DNA[*j] == 'G') {
        check[2]++;
    } else if (DNA[*j]=='T') {
        check[3]++;
    }

    if (DNA[*i] == 'A') { 
        check[0]--;
    } else if (DNA[*i] == 'C') {
        check[1]--;
    } else if(DNA[*i] == 'G') {
        check[2]--;
    } else if (DNA[*i]=='T') {
        check[3]--;
    }
    (*i)++;
    (*j)++;


}