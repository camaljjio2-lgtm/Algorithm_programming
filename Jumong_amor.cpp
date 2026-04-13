// **주몽의 명령**
/*
갑옷을 만들려면 재료 2개가 필요하다 재료의 개수 N을 입력 받고 재료 2개를 합해서 M이 되면 갑옷이 하나 완성 된다
갑옷이 만들어지는 총 개수는?
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    
    cin >> M ;
    cin >> N;

    vector<int> array(M, 0);
    for (int i = 0; i < M; i++) {
        cin >> array[i] ;
    }

    sort(array.begin(), array.end());

    for (int i = 0; i < M; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
    int count = 0;
    /*
    내가 짠 코드 
    for (int j = M-1; j > 0; j--) {
        for (int i = 0; i < j; i++) {
            int sum = array[j] + array[i];
            if (sum == N) {
                count++;
            }
            sum = 0;
        }
    }
    */

    int i = 0;
    int j = M -1;
    while (i < j) 
    {
        if ((array[i] + array[j]) < N) {
            i++;
        } else if (array[i] + array[j] > N) {
            j--;
        } else {
            count++;
            i++;
            j--;
        }
    }
    cout << count << "\n";
}