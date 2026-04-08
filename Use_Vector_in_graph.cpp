// 2차원 벡터를 사용한 그래프 구현 

#include <iostream>
#include <vector>

struct Edge {
    int endNode;
    int value;
};
using namespace std;

int main() {
    vector<vector<Edge>> A;
    int N, E;
    cin >> N >> E;
    A.resize(N+1);
    //그냥 N이 아닌 이유는 대부분 자료구조 인덱스는 1부터 시작이기 떄문이다.
    // 값을 넣는 반복문 
    for (int i = 0; i < E; i++) {
        int s,e,v = 0;
        cin >> s >> e >> v;
        A[s].push_back({e,v});
    }
}