#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0; 
        while(n > 0){
            count++;
            n = n/10;
        }
        return count;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of digits = " << obj.countDigit(n) << endl;

    return 0;
}