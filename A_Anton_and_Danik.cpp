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
    string a ;
    int count_A = 0 ;
    int count_D = 0 ;
    cin >> a ;

    for(int i = 0 ; i < a.length() ; i++){

        if(a[i]=='A'){
        count_A ++ ;
        }
        else
        {
        count_D ++ ;
        }
    }
    if(count_A == count_D){
        cout << "Friendship" ;
    }
    else if (count_A >= count_D){
        cout << "Anton" ;
    }
    else {
        cout << "Danik" ;
    }
    return 0;
}