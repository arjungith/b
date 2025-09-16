#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;  

    long long result = 0, place = 1;

    while (a > 0 || b > 0) {
        int bitA = a % 10;  
        int bitB = b % 10;  
        int x = bitA ^ bitB;  

        result += x * place; 
        place *= 10;

        a /= 10;  
        b /= 10;
    }

    cout << result << endl;
    return 0;
}
