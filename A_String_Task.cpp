#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string lowercase(string s){

    for(int i = 0 ; i<s.size() ; i++){

        if(s[i]>='A' && s[i]<='Z'){

            s[i] = s[i]+32 ;
        }

    }
    return s ;

}

int main()
{
    fastio;
    string s ;
    cin >> s ;
    s = lowercase(s) ;
    string ans ;
    for (size_t i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            ans.push_back('.');
            ans.push_back(c);
        }
    }
    cout << ans ;

    return 0;
}