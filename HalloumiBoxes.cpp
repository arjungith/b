#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool HalloumiBoxes(int n , int k) {
    vector<int> a;

    int b;

    for (int i = 0; i < n; i++) {
        cin >> b;
        a.push_back(b);
    }

    vector<int> sorted_a = a;

    sort(sorted_a.begin(), sorted_a.end());
    

    if (k >= 2) return true;
    return a == sorted_a;
}

int main() {
    int z;
    cin >> z;

    for (int i = 0; i < z; i++) {

        int n, k;

        cin >> n >> k;

        if (HalloumiBoxes(n, k))

            cout << "YES\n";

        else

            cout << "NO\n";

    }
    return 0;
}
