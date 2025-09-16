#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;

int anton_and_polyhedrons(int n , vector<string> shapes) {
    
    int count = 0 ;

    for(int i=0 ; i<n ; i++) {

        if(shapes[i] == "Tetrahedron") {
            count += 4 ;
        }

        else if(shapes[i] == "Cube") {
            count += 6 ;
        }

        else if(shapes[i] == "Octahedron") {
            count += 8 ;
        }

        else if(shapes[i] == "Dodecahedron") {
            count += 12 ;
        }

        else if(shapes[i] == "Icosahedron") {
            count += 20 ;
        }
    }

    return count ;  
}

int main() {
    int n ;
    cin >> n ;

    vector<string> shapes(n) ;

    for(int i=0 ; i<n ; i++) {
        cin >> shapes[i] ;
    }

    cout << anton_and_polyhedrons(n , shapes) << endl ;

    return 0 ;
}