#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int N, M = 0;
    cin >> N >> M;

    vector<int> array(N, 0);
    vector<int> S(M, 0);

    cin >> array[0];
    int temp;
    for (int i = 1; i < N; i++) {
        cin >> temp;
        array[i] = temp + array[i-1];
    }
    // 1 2 3 1 2  입력 = 1 3 6 7 9 
    // 1 0 0 1 0
//------------------------------------
    int answer = 0;
    for (int i = 0; i < N; i++) {
        int reminder = array[i] % M; 

        if (reminder == 0) {
            answer++; // answer = 3 
        }
        S[reminder]++; // S[1] = 2
    }

    // 0이 2개 
    for (int i = 0; i < N; i++) {
        if (S[i] > 1) { //2C2 2 X 1 - 2 X 1 
            answer = answer + (S[i] * (S[i]-1) /2 );
        }
    }
//---------------------------------------------------
    cout << answer;


}