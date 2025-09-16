#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;
    set<int> s;

    
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int q;
    cin >> q;

    
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        s.insert(y);
    }

    for(int i = 1 ; i <= n ; i++){
        if(s.find(i) == s.end()){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0 ;
}
