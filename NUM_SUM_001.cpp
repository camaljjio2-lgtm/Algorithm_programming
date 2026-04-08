#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N = 0;
    cin >> N;
    char number[100] = {};
    cin >> number;

    if (N > 100 || N < 1) return 0;
    int i = 0;
    int sum = 0;
    while (number[i] != '\0') {
        sum += int(number[i] - '0');
        i+=1;


    }
    if (i != N) return 0;
    cout << sum;

}