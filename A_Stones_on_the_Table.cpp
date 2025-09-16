#include <bits/stdc++.h>

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
    string s ;
    cin >> s ;
    int duplicates = 0 ;
    for(int i = 0 ; i < s.length()-1 ; i++){

        if(s[i] == s[i+1]){
            duplicates++ ;
        }

    }
    cout << duplicates ;
    return 0;
}