#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b , c;
        cin >> a >> b >> c;
        if(b == 1 && c == 1)
            cout << "NO" << endl;
        else if(b == 2 && c == 1)
        {
            if(a % 2 == 0)
            {
                cout << "YES" << endl << a/2 << endl;
                for (int i = 0; i < a/2; i++) {
                    cout<<"2 ";
                }
                cout << endl;
            }
            else 
                cout << "NO" << endl;
        }
        else if(c == 1)
        {
            if(a % 2 == 0)
            {
                cout << "YES" <<endl << a/2 << endl;
                for (int i = 0; i < a/2; i++) {
                    cout<<"2 ";
                }
                cout << endl;
            }
            else if(a % 3 == 0)
            {
                cout << "YES" << endl << a/3 << endl;
                for (int i = 0; i < a/3; i++) {
                    cout<<"3 ";
                }
                cout << endl;
            }
            else
            {
                cout << "YES" << endl << a/2 << endl;
                cout<<"3 ";
                for (int i = 0; i <(a/2)-1; i++) {
                    cout<<"2 ";
                }
                cout << endl;
            }
        }
        else if(c > 1)
        {
            cout << "YES" << endl << a << endl;
            for (int i = 0; i < a; i++) {
                cout << "1 ";
            }
            cout << endl;
        }
    }
}
