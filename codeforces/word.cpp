#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c1 = 0, c2 = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            c1++;
        else
            c2++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (c1 > c2)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        } 
    }
    cout << s;
}
