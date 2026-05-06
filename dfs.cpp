#include <iostream>
#include <vector>

using namespace std;
static vector<vector<int>> A;
static vector<bool> visited;
void DFS(int v);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int node_num;
    int edge_num;
    cin >> node_num >> edge_num;
    A.resize(node_num + 1);

    for (int i = 1; i <= edge_num; i++) {
        int edge;
        int node;
        cin >> node >> edge;
        A[node].push_back(edge);
        A[edge].push_back(node);
    }
 
    visited.resize(node_num +1, false);
    int count = 0;
    for (int i = 1 ; i < node_num +1; i++) {
        if (!visited[i]) {
            count++;
            DFS(i);
        }
    }
    cout << count <<"\n";
}

void DFS(int v) {
    if (visited[v]) {
        return ;
    }
    visited[v] = true;

    for (int i : A[v]) {
        if(visited[i] == false) {
            DFS(i);
        }
    }
}


