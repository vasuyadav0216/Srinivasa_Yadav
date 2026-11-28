#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> v(n);
        int sum = 0 , maxi = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            maxi = max(v[i] , sum);
        }
        int g = (n/k) * p;
        if(n % k == 0) {
            sum = max(sum , g);
        }
        else {
            sort(v.begin() , v.end() , greater<int> ());
            int haa = 0;
            for (int i = n; i >= g; i--) {
                haa += v[i];
            }
            sum = max(sum , haa);
        }
        cout << sum << endl;
    }
}