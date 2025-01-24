
#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n1 = 0;
        int n11 = 0;
        int n2 = 0;
        int n22 = 0;
        for (int i = 0;i<s.size();i++) {
            if (s[i] == '(')
            {
                n1++;

            }
            else if ((s[i] == ')') && (n1 != 0))
            {
                n11++;
                n1--;
            }
            else if (s[i] == '[')
            {
                n2++;

            }
            else if ((s[i] == ']') && (n2 != 0))
            {
                n22++;
                n2--;
            }
        }
        cout << n11 + n22 << endl;
    }

    return 0;
}