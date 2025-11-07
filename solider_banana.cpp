#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, w;
    cin >> a >> b >> c;
    int sum = c *(c + 1) / 2 ;
    int r_cost = a * sum;
    if (b >= r_cost)
        cout << 0 << "\n";
    else
    {
        cout << r_cost - b;
    }

   
}