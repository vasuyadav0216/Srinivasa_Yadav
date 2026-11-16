#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    sort(v.begin(),v.end());
    sort(s.begin(),s.end());

    for (int i = 0; i < n; i++) {
        if(v[i] != s[i]) {
            cout << "No";
            break;
        }
        else {
            cout << "Yes";
            break;
        }
    }
}