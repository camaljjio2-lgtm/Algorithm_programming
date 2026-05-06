#include <iostream>
#include <vector>
using namespace std;
static vector<vector<int>> A;

int main() {
    int N, E;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> E;
    A.resize(N +!);

    for (int i = 0; i <  N; i++) {
        int n , e;
        cin >> n >> e;
        A[n].push_back(e);
        A[e].push_back(n);
    }  



}

void DFS(int v) {
    for (int i  : A[v]) {
        DFS(i);
    }   

}


