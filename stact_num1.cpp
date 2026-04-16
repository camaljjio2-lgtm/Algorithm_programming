#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> mys;

    string word;
    cin >> word;
    int l = word.length();
    char c;
    for (int i = 0; i < l; i++) {
        c = word[i];

        if (c == '(') {
            mys.push(c);
        } else {
            if (mys.empty()) {
                cout << "NO";
                return 0;
            }
            mys.pop();
        }

    }

    if (mys.empty()) {
        cout << "yes";
    } else {
        cout << "NO";
    }

}