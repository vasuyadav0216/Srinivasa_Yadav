#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1 , 1 , -1 , -1};
int dy[4] = {1 , -1 , 1 , -1};

int main() 
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a , b;  
        cin >> a >> b;

        int xk , xq , yk , yq;  
        cin >> xk >> yk >> xq >> yq;

        set < pair<int , int>> sk;
        for (int i = 0; i < 4; i++) {
            sk.insert({xk + dx[i] * a , yk + dy[i] * b});
            sk.insert({xk + dx[i] * b , yk + dy[i] * a});
        }

        set < pair<int , int>> sq;
        for (int i = 0; i < 4; i++) {
            sq.insert({xq + dx[i] * a , yq + dy[i] * b});
            sq.insert({xq + dx[i] * b , yq + dy[i] * a});
        }

        int count = 0;
        for (auto v : sk) {
            if(sq.count(v)) {
                count++;
            }
        }
        cout << count << "\n";
    }
}