#include <iostream>
#include <math.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

string hulk(int n) {
    string result = "";
    for(int i = 0; i < n; i++) {

        if(i % 2 == 0) {
            result += "I hate ";

        } else {
            result += "I love ";
        }

        if(i != n - 1) {
            result += "that ";

        } 
        
        else {
            result += "it";
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << hulk(n) << endl;
    return 0;
}