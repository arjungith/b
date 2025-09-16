#include<iostream>
using namespace std ;
int main {
int n, k, l, c, d, p, nl, np ;
cin >> n >> k >> l >> c >> d >> p >> nl >> np 
int mlfortoast = (k*l)/n ;
int limesenogh = c*d ;
int saltenogh = p/np ;
int ans = min(mlfortoast , limesenogh ,saltenogh)/n ;
cout << ans << endl ;
return 0 ;
}