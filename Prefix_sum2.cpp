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
        }
    }
    int x1, y1 = 0;
    int x2, y2 = 0;
    int sum = 0;
    for (int i =0; i < M; i++){
        cin >> x1 >> y1 >> x2 >> y2 ;
        sum = grid[x2][y2] - grid[x2][y1-1] - grid[x1-1][y2] + grid[x1-1][y1-1];
        cout << sum << "\n";
    }
}


    
