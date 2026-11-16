#include<bits/stdc++.h>
using namespace std;

int main() {
    int h , w , n , q;
    cin >> h >> w >> n >> q;
    vector<int> a(n) , b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    vector<int> q1(q) , q2(q) , q3(q);
    for (int i = 0; i < q; i++) {
        cin >> q1[i] >> q2[i] >> q3[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(a[i]);
        s.insert(b[i]);
    }
    for (int i = 0; i < q; i++) {
        s.insert(q2[i]);
        s.insert(q3[i]);
    }

    int names=0;
    map<long long int,int> ma;
    for(auto val:s) {
        ma[val] = names++;
    }
    h = s.size();
    w = s.size();
    vector<int> row(h+1,0);
    vector<int> col(w+1,0);

    for (int  i = 0; i < n; i++){
        row[ma[a[i]]]++;
        col[ma[b[i]]]++;
    }


    for (int i = 1; i < h; i++) {
        row[i]+=row[i-1];
    }


    for (int i = 1; i < w; i++) {
        col[i]+=col[i-1];
    }


    int left = 0;
    int right = 0;
    for (int i = 0; i < q; i++) {
    if(q1[i]==1) {
        left = ma[q2[i]];
        right = ma[q3[i]];
        long long int ans = row[right];

        if(left != 0) 
            ans -= row[left-1];
        cout<<ans<<endl;
    }
    else {
        left = ma[q2[i]],
        right = ma[q3[i]];
        long long int ans = col[right];

        if(left!=0) 
            ans -= col[left-1];
        cout<<ans<<endl;
        }
    }
}