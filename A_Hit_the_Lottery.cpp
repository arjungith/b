#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int hit_the_lottery(int n) {
    int count = 0;
    vector<int> denominations = {100, 20, 10, 5, 1};

    for (int denom : denominations) {
        count += n / denom;
        n %= denom;
    }

    return count;
}

int main () {
    int n;
    cin >> n;
    cout << hit_the_lottery(n) << endl;
    return 0;
}
