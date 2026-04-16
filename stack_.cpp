#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<int> S;
vector<int> A;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<char> c;
    int n;
    cin >> n;
    A.resize(n);

    for (int i =0; i< n; i++) {
        cin >> A[i];
    }

    bool check =  true;
    int num =1;

    for (int i = 0; i < A.size(); i++) {
        int su = A[i];
        if (su >= num) {
            while (su >= num) {
                S.push(num++);
                c.push_back('+');
            }
            S.pop();
            c.push_back('-');
        } else {
            int n = S.top();
            S.pop();
            if (n > su) {
                cout << "NO";
                check = false;
                break;
            } else {
                c.push_back('-');
            }
            

        }
    }

    if (check) {
        for (int i = 0; i < c.size(); i++) {
            cout << c[i] << "\n";   
        }
    }
}
