#include <iostream>
#include<set>
#include <set>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m, k, x;
		cin >> n >> m >> k;
		set<int> a, b, c;
		for (int i = 0; i < m + n; i++) 
		{
			cin >> x;
			if (x <= k && i < n)
			{
				a.insert(x);
				c.insert(x);
			}
			if (x <= k && i >= n)
			{
				b.insert(x);
				c.insert(x);
			}
		}
		if (a.size() >= k / 2 && b.size() >= k / 2 && c.size() == k) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

	}
    return 0;
}