#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if ((s[0] - '0' == 0) && (s[2] - '0' == 0))
        {
            cout << s[0]<<"="<<s[2] << endl;
        }
        else if (s[1] == '<')
        {
            if (  (s[0] - '0') > (s[2] - '0')  )
                cout << (s[0] - '0')  << ">" << s[2] << endl;
            else if((s[0] - '0') == (s[2] - '0'))
                cout << (s[0] - '0') << "=" << s[2] << endl;
            else
                cout << s << endl;
        }
        else if (s[1] == '>')
        {
            if ((s[0] - '0') < (s[2] - '0'))
                cout<< (s[0] - '0')<<"<" << s[2] << endl;
            else if ((s[0] - '0') == (s[2] - '0'))
                cout << (s[0] - '0') << "=" << s[2] << endl;
            else
                cout << s << endl;
        
        }
        else
        {
            if ((s[0] - '0') < (s[2] - '0'))
            {
                cout << s[0] << "<" << s[2] << endl;
            }
            else if ((s[0] - '0') > (s[2] - '0'))
            {
                cout << s[0] << ">" << s[2] << endl;
            }
            else
                cout << s << endl;
        }
    }
    return 0;
}
