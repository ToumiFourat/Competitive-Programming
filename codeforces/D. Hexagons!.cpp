#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    else if (n == 1)
    {
        cout << 7;
    }
    else
    {
        long long s = 7;
        for (int i = 2; i <= n; i++)
        {
            s = s + (long long)6 * i;
        }
        cout << s;
    }
    return 0;
}