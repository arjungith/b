#include <iostream>
#include <math.h>
#include <vector>
#include <iostream>
using namespace std;

long long int minimoves(long long int a, long long int b) {
    return (b - a % b) % b;
}

int main() {
    long long int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        long long int a, b;
        cin >> a >> b;
        cout << minimoves(a, b) << endl;
    }

    return 0;
}
