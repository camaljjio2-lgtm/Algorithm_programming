#include <iostream>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M = 0;
    int A[100001] = {} ;
    cin >> N >> M;
    if (N > 100000 || N < 1) return 0;
    if (M > 100000 || M < 1) return 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        A[i] += A[i-1];
    }
    
    for (int j = 0; j < M; j++) {
        int start, end;
        cin >> start >> end;
        cout << A[end]-A[start-1]; // 1 3 6 10 3,4 10-4 6
    }
    
}