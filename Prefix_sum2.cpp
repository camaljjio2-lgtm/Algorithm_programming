#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int grid[1025][1025] = {};
    int N, M = 0;
    cin >> N >> M;

    for (int i = 1 ; i <= N; i++) {
        for (int j = 1; j <=N; j++) {
            cin >> grid[i][j] ;
        }
    }

    for (int j = 1; j < N; j++) {
        for (int k = 1; k < N; k++) {
            grid[j][k] += grid[j][k-1] + grid[j-1][k] - grid[j-1][k-1];
            cout << grid[j][k] << " ";
        }
        cout << "\n";
    }
    
}


    
