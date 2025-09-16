#include <iostream>
#include <math.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> gravityflip(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    return arr;

}

int main() {
    vector<int> arr ;

    int n ;
    cin >> n ;

    for(int i = 0; i < n; i++) {
        
        int a ;
        cin >> a ;
        arr.push_back(a);

    }
    vector<int> result = gravityflip(arr);

    for(int i = 0; i < n; i++) {

        cout << result[i] << " ";

    }
    cout << endl;

    return 0;
}