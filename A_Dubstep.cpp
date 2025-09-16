#include <iostream>
#include <string>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

string Dubstep(const string &s) {
    
    string ans;

    int i = 0;

    bool spaceNeeded = false;

    while (i < (int)s.length()) {
        
        if (i + 2 < (int)s.length() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){

            i += 3; 

            spaceNeeded = true;

        } else {

            if (spaceNeeded && !ans.empty()) {

                ans.push_back(' ');

            }

            ans.push_back(s[i]);
            i++;
            spaceNeeded = false;
        }
    }

    return ans;
}

int main() {
    fastio;
    string s;
    getline(cin, s);
    cout << Dubstep(s) << endl;
    return 0;
}
