#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(ll k , ll n , ll h , vector<ll> v) {
    ll sum = 0;
    for (ll i = 0; i < n-1; i++) {
        if(v[i+1] - v[i] >= k) {
            sum += k;
        }
        else {
            sum += v[i+1] - v[i];
        }
    }
    if(sum >= h)
        return true;

    return false;
}

ll binary_Search(ll n , ll h , vector<ll> v) {
    ll l = 0, r = 1e18;
    while(l < r) {
        ll mid = l + (r - l) / 2;
        if (check(mid , n , h , v)) {
            r = mid;
        }
        else
            l = mid + 1;
    }
    return l;
}

int main() {
    ll t; cin >> t;
    while(t--)
    {
        ll n , h; cin >> n >> h;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << binary_Search(n , h , v)/2+1 << endl;
    }
}