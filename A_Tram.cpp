#include <iostream>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n ;
    cin >> n ;
    int a , b ;
    cin >> a >> b ;
    int totalin = a+b ;
    int d , f ;
    
    int maxi = INT_MIN ;
    for(int i = 2 ; i<=n ; i++){

        cin >> d >> f ;
        maxi = max(maxi , totalin) ;
        totalin = totalin - d + f ;
        maxi = max(maxi , totalin) ;

    }
    cout << maxi ;
    return 0;
}