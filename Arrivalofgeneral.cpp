#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int max_val = a[0], min_val = a[0];
    int maxi_idx = 0, mini_idx = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max_val) {
            max_val = a[i];
            maxi_idx = i; // leftmost max
        }
        if (a[i] <= min_val) {
            min_val = a[i];
            mini_idx = i; // rightmost min
        }
    }

    int moves = maxi_idx + (n - 1 - mini_idx);
    if (maxi_idx > mini_idx) moves--; // adjust for overlap

    cout << moves << endl;
    return 0;
}
