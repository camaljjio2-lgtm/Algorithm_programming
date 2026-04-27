#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> S(N,0);
    stack<int> index;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    index.push(0);
    // -----여기까지는 똑같았음 ㅋㅋㅋㅋ ---------
    for (int i = 1; i < N; i ++) {
        while(!index.empty() && S[index.top()] < S[i]) {
            A[index.top()] = S[i];
            index.pop();
        }
        index.push(i);
    }
    
    while(!index.empty()) {
        A[index.top()] = -1;
        index.pop();
    }
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

            
}
