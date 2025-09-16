#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long kthelement(long n , long k) {
    
    long long odd_count = (n + 1) / 2 ;

    if(k <= odd_count) {

        return 2 * k - 1 ;

    }

    else {

        return 2 * (k - odd_count) ;

    }
}

int main(){

    long long n , k ;
    cin >> n >> k ;

    cout << kthelement(n , k) << endl ;



}