#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

string toUppercase(string s){
    for(int i = 0 ; i<s.length() ; i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32 ;
        }
    }
    return s ;
}
string toLowercase(string s){
    for(int i = 0 ; i<s.length() ; i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32 ;
        }
    }
    return s ;
}


int main()
{
    fastio;
    int count_Lowercase = 0 ;
    int count_Uppercase = 0 ;
    string s ;
    cin >> s ;
    string a ;
    for(int i = 0 ; i<s.length() ; i++){

        if(s[i]>='A' && s[i]<='Z'){
            count_Uppercase++ ;
        }
        else {
            count_Lowercase++ ;
        }
    }
    if(count_Lowercase<count_Uppercase){
        a = toUppercase(s) ;
    }
    else{
        a = toLowercase(s) ;
    }
    cout << a ;
    return 0;
}