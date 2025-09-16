#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s ;
    cin >> s ;
    string a ;
    cin >> a ;
    string b = s ;

    reverse(b.begin() , b.end()) ;
    if(b == a){
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }
    return 0;
}