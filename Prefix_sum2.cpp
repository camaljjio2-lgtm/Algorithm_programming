#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int N, M = 0;
    cin >> N >> M;
    vector<vector<int>> grid(N+1, vector<int>(N+1,0));
    for (int i = 1 ; i <= N; i++) {
        for (int j = 1; j <=N; j++) {
            cin >> grid[i][j] ;
        }
    }

    for (int j = 1; j <= N; j++) {
        for (int k = 1; k <= N; k++) {
            grid[j][k] += grid[j][k-1] + grid[j-1][k] - grid[j-1][k-1];
            cout << grid[j][k] << " ";
        }
        cout << "\n";
    }
    
}


    
