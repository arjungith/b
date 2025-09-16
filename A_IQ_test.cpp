#include <iostream>
#include <vector>
#include <algorithm>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int IQtest(vector<int> &arr){
    int n = arr.size()-1 ;

    if (arr[0]%2 == 0 && arr[n]%2 != 0){

        if(arr[1]%2==0)
            return n ;
        else
            return 0 ;
        
    
    }
    else if (arr[0]%2 != 0 && arr[n]%2 == 0){

        if(arr[1]%2!=0)
        return n ;
        else
        return 0 ;
    }

    for(int i = 0 ; i <arr.size() ; i++){

        if(arr[0]%2 == 0 && arr[n]%2 == 0){

            if(arr[i]%2!=0){
                return i ;
            }
        }
        else if(arr[0]%2 != 0 && arr[n]%2 != 0){

            if(arr[i]%2==0){
                return i ;
            }
        }

    }
    return -1 ;

}
    

int main()
{
    fastio;
    int n ;
    cin >> n ;
    vector<int> arr ;
    int a ;
    for(int i = 1 ; i <= n ; i++){
        cin >> a ;
        arr.push_back(a) ;
    }
    
    cout << IQtest(arr)+1 << endl ;

    return 0;
}