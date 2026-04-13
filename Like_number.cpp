#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N; // 줄의 개수
    vector<int> A(N); // 숫자
    int k = 0; // K 좋은 수 
    for (int i = 0; i < N; i++) {
        cin >> A[i];    //숫자 입력 받는다 
    }
    sort(A.begin(), A.end());


    int cnt = 0;
    for (int k = 0; k < N; k++)
    {
        int key = A[k];
        int i = 0;
        int j = N - 1;

        while (i < j) 
        {
            if ((A[i] + A[j]) ==key) 
            {
                if ((A[i] != key) && (A[j] != key)) 
                {
                    cnt ++;
                    break;
                } 
                else if (i == k) 
                {
                    i++;
                }
                else if (j == k) 
                {
                    j--;
                }
            }
            else if ((A[i] + A[j]) < key ) 
            {
                i++;
            } 
            else 
            {
                j--;
            }
        }
    }
    cout << cnt;
}