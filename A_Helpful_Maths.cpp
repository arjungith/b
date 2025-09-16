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
    vector<int> arr ;
    for(int i = 0 ; i<s.length() ; i++){
       if (s[i]>='1' && s[i]<='3')
       {
        arr.push_back(s[i]-'0') ;
       }
        
    }

    sort(arr.begin() , arr.end()) ;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) {cout << "+";}
    }
    cout << endl ;
    return 0;
}