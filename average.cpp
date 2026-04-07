#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    if (N > 1000) return 0;
    vector<float> score(N);
    int max_score = 0;
    
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> score[i];
        if (max_score < score[i]) {
            max_score = score[i];
        }
        sum += score[i];
    }

    double result = (sum * 100.0 / max_score / N);
    cout << result;
    return 0;
    
}