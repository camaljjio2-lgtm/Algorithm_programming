#include <iostream>

using namespace std;

int main() 
{
    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0 ;
    cin >> N;

    int start_index = 1;
    int end_index = 1;
    int count = 1;
    int sum = 1;
    while (end_index != N) {
        if (sum < N) {
            end_index++;
            sum= sum + end_index;
        } else if (sum > N) { 
            sum = sum - start_index;
            start_index++;

        } else if (sum == N) {
            count++;
            end_index++;
            sum = sum + end_index;
        }
    }

    cout << count;
}
