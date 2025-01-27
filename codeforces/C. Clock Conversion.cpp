#include <iostream>
using namespace std;
#include<string>


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string hh = "", mm = "";
        hh = hh + s[0] + s[1];
        mm = mm + s[3] + s[s.size() - 1];
        int hhh = stoi(hh);
        if (hhh == 00)
        {
            cout << 12 << ":" << mm << " AM" << endl;
        }
        else if (hhh / 12 < 1)
        {
            if (hhh < 10)
                cout << "0" << hhh << ":" << mm << " AM" << endl;
            else
                cout << hhh << ":" << mm << " AM" << endl;
        }
        else if (hhh == 12)
        {
            cout << 12 << ":" << mm << " PM" << endl;
        }
        else
        {
            hhh = hhh - 12;
            if (hhh < 10)
                cout << "0" << hhh << ":" << mm << " PM" << endl;
            else
                cout << hhh << ":" << mm << " PM" << endl;
        }

    }
    return 0;
}