 

int kthelement(int n , int k) {
    vector <int> vec ;
    
    if(n%2 != 0){
        for(int i = 1 ;i <= n ; i+=2) {

            vec.push_back(i) ;
        }

        for(int i = 2 ; i <= n ; i+=2) {

            vec.push_back(i) ;
        }
        
    }
    else {

        for(int i = 1 ; i <= n ; i+=2) {

            vec.push_back(i) ;
        }

        for(int i = 2 ; i <= n ; i+=2) {

            vec.push_back(i) ;
        }
    }

    return vec[k-1] ;
}

int main(){

    int n , k ;
    cin >> n >> k ;

    cout << kthelement(n , k) << endl ;



}