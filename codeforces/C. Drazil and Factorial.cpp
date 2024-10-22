#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    string a;
    cin >> a;


    string m[10] = { "", "", "2", "3", "223", "5", "35", "7", "2227", "2337" };

    string s = "";
    for (char c : a) {
        s += m[c - '0'];
    }


    sort(s.begin(), s.end(), greater<char>());

    cout << s << endl;

    return 0;
}