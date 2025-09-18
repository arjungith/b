#include <iostream>
#include <math.h>
#include <vector>
using namespace std;


int main(){

    int t ; 
    cin >> t ;
    int n ; 
    int x ;
    int a ;


    for(int i = 1 ; i<=t ; i++){

        cin >> n >> x ;
        vector<int> ans ;
        ans.push_back(0) ;
        int maxi = 0 ;

        for(int i = 1 ; i <=n ;i++){
            cin >> a ;
            ans.push_back(a) ;
        }
        int k = ans.size() ;
        for(int i = 0 ; i<ans.size()-1 ; i++){

            maxi = max(maxi , ans[i+1]-ans[i]) ;
            maxi = max(maxi, 2*(x-ans[k-1]));
            


        }
        
        cout << maxi << endl ;

    }



}