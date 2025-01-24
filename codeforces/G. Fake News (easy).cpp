#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;


    string target = "heidi";
    int j = 0; 

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[j]) {
            j++; 
        }
        if (j == target.size()) {
        
            cout << "YES" << endl;
            return 0;
        }
    }


    cout << "NO" << endl;

    return 0;
}
