#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; 
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int count = 0 , maxi = 0;

        for (int i = 0; i < n; i++) {
            if(v[i] == 0) {
                count++;
                maxi = max({maxi , count});
            }
            else {
                count = 0;
            }
        }
        cout << maxi << endl;
    }
}