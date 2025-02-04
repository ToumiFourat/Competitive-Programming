#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int p=1;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		auto min =min_element(v.begin(), v.end());
		
		int n1 = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] == *min && n1==0) {
				p = p * (v[i] + 1);
				n1++;
			}
			else {
				p = p * v[i];
			}
		}
		cout << p << endl;


	}
    return 0;
}