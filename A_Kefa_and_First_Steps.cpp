#include<iostream>
#include<vector>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;



int main()
{
    fastio;
    int n;
    cin >> n ;
    int a ;
    vector<int> ans ;
    int substring = 1 ; 
    int maxi = 1 ;

    for(int i = 1 ; i<= n ; i++){

        cin >> a ; 

        ans.push_back(a) ;

    }
    for(int i = 0 ; i<ans.size()-1; i++){

        if(ans[i]<=ans[i+1]){
            substring++ ;
        }
        else{

            maxi = max(maxi,substring) ;
            substring = 1 ;
        }
        maxi = max(maxi,substring) ;
    }
    cout << maxi ;
    return 0;
}