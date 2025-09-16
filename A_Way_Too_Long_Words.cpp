#include <iostream>
#include <string>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n  ;
    cin >> n ;
    string a ;
    int count = 0 ;

    for(int i = 1 ; i <=n ; i++){
        cin >> a ;

        if(a.length()<=10){

            cout << a << endl ;

        }
        
        else {

            string ans = string(1, a.front()) + 
                         to_string(a.length() - 2) + 
                         string(1, a.back());
            cout << ans << endl;

        }

    }
    return 0;
}