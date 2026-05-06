#include <iostream>
using namespace std;

void DFS(int v, int jarisu);
bool isprime(int number);
static int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    DFS(2, 1);
    DFS(3,1);
    DFS(5,1);
    DFS(7,1);
}

void DFS(int v, int jarisu) {
    if(jarisu == n) {
        if(isprime(v)) {
            cout << v << "\n";  
            
       }
       return ;
    }
     
    for (int i =1; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (isprime(v * 10 + i)) {    
            DFS(v * 10 + i, jarisu + 1);
        }
    }
}


bool isprime(int number) {
    if (number < 2) return false;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}


