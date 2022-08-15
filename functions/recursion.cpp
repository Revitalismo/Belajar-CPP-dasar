#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int result = factorial(5);
    cout << result << endl;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n-1);
    } else {
        return 1;
    }
    
}