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

