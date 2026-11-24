#include <bits/stdc++.h>
using namespace std;

int char_chacker(char c, string &s)
{
    int present=0;
    for (auto &m:s)
    {
        if (c == m || c-32 == m)
        {
            present = 1;
            break;
        }
    }
        return present;

}

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int all_present=1;
    for (char c ='a'; c <='z';c++)
    {
        all_present = all_present &char_chacker(c,s);
    }
    if(all_present == 1)
        cout << "YES";
    else
        cout << "NO";
}