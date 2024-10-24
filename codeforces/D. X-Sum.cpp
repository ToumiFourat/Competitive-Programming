#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin >> x;
                v[i][j] = x;
            }
        }
        int s1 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int i1 = i-1;
                int i2 = i + 1;
                int j1 = j+1;
                int j2 = j-1;
                int s2 = v[i][j];
                while (i1 >= 0 && j1 <m)
                {
                    s2 = s2 + v[i1][j1];
                    j1++;
                    i1--;
                }
                while ( i2<n && j2 >=0 )
                {
                    s2 = s2 + v[i2][j2];
                    i2++;
                    j2--;
                }
                int i3 = i - 1;
                int i4 = i + 1;
                int j3 = j + 1;
                int j4 = j - 1;
                while (i4 <n && j3 <m)
                {
                    s2 = s2 + v[i4][j3];
                    j3++;
                    i4++;
                }
                while (i3 >=0 && j4 >= 0)
                {
                    s2 = s2 + v[i3][j4];
                    i3--;
                    j4--;
                }

                if (s1 < s2)
                {
                    s1 = s2;
                }
            }

        }
        cout << s1 << endl;
    }

    return 0;
}