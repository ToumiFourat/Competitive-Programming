#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int p,sum=0;
        cin >> s >> p;
        vector<int>v(s.size());
        for (int i = 0; i < s.size(); i++)
        {
            v[i] = s[i] - 'a' + 1;
          
            sum = sum + (s[i] - 96);
        }
      
        sort(v.begin(), v.end(), greater<int>());
        int i = 0;
        string remove="";
        while (p < sum)
        {
            
            sum = sum - v[i];

            remove = remove + (char)(v[i] +96);
            
            i++;
        }
       
        
    
  




        
        if (sum==0)
        {
            cout << "" << endl;
        }
        else
        {
            unordered_map<char, int> remove_count;
            for (char c : remove) {
                remove_count[c]++;
            }

            string result;
            for (char c : s) {
                
                if (remove_count.find(c) == remove_count.end() || remove_count[c] == 0) {
                    result += c; 
                }
                else {
                    remove_count[c]--; 
                }
            }

            cout << result << endl; 
        }
        
    }
    return 0;
}