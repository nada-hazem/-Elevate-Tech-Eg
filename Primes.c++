#include <iostream>
#include <cmath> 

using namespace std;

void printPrime(int n, int m) {
    if (n > m) {
        swap(n, m);
    }

    for (int i = n+1; i < m; i++) {
        if (i < 2) {
            continue; 
        }

        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false; 
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl; 
}

int main() {
    int n, m;
    cout << "Enter your numbers:" << endl;
    cin >> n >> m;

    printPrime(n, m);

    return 0;
}
