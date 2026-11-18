#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<int> v(x);
        int count = 0;
        for (int i = 0; i < x; i++) {
            cin >> v[i];
            if(v[i] == '2')
            count++;
        }
        if(count == 0) {
            cout << "1" << endl;
        }
        else if(count % 2 != 0) {
            cout << "-1" << endl;
        }
        else if(count == x) {
            cout << x/2 << endl;
        }
        else {
            int count1 = 0;
            for (int i = 0; i < x; i++) {
                if(v[i] == '2') {
                    count1++;
                }
                if(count/2 == count1) {
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }

}