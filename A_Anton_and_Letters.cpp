#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int AntonandLetter(string s){

    set<char> ans ;

    for(int i = 0 ; i < s.size() ; i++){

        if (s[i] >= 'a' && s[i]<='z')
        {
            ans.insert(s[i]) ;
        }

    }

    return ans.size() ;


}


int main()
{
    fastio;

    string s ;
    getline(cin, s) ;
    cout << AntonandLetter(s) << endl ;
    
    return 0;
}