#include <iostream>
#include <deque>
using namespace std;

typedef pair<int,int> Node;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, L;
    deque<Node> mydeque;
    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;

        while (mydeque.size() && mydeque.back().first > number) {
            mydeque.pop_back();
        }
        mydeque.push_back(Node(number, i));
        
        if (mydeque.front().second <= i -L) {
            mydeque.pop_front();
        }
        cout << mydeque.front().first << ' ';
    }

}