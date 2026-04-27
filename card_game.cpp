/*
문제 : 카드 게임
N장의 카드가 있다 각각의 카드는 차례로 1에서 N까지 번호가 붙어 있으며, 1번 카드가 가장 위, N번 카드가 가장 아래인 상태로 놓여있다. 이제 다음과 같은 동작을 카드가 1장 남을 때까지 반복한다 
먼저 가장 위에 있는 카드를 바닥에 버리고 그 다음 가장 위에 있는 카드를 가장 아래에 있는 카드 밑으로 옮긴다

*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    queue<int> myqueue;
    for (int i = 1; i <= N; i++) {
        myqueue.push(i);
    }
    int num = 0;
    while (myqueue.size() > 1){
        myqueue.pop();
        num = myqueue.front();
        myqueue.push(num);
        myqueue.pop();
        
    }
    cout << myqueue.front();
}

