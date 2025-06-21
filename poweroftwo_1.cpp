#include <iostream>
#include <cmath>  
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        for (int i = 0; i <= log2(n); i++) {
            if (pow(2, i) == n) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (sol.isPowerOfTwo(n)) {
        cout << n << " is a power of two.\n";
    } else {
        cout << n << " is not a power of two.\n";
    }
    return 0;
}
