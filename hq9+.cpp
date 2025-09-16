#include <iostream>
#include <math.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool hq9plus() {
    string s;
    cin >> s;

    for(char c : s) {
        if(c == 'H' || c == 'Q' || c == '9') {
            return true;
        }
    }
    return false;
}

int main() {
    if(hq9plus()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}