#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        
        int l, r;
        cin >>l >> r;
        if (l == r)
        {
            n = 1;
        }
        else
        {
            int j = 2;
            int l1 = l + j+1;
            n = 2;
            while (l1 <= r)
            {
                n++;
                j++;
                l1 = l1 + j;
            }
            
        }
        cout << n << endl;
    }
  
}
