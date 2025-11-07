#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char>words(s.begin(),s.end());
    if(words.size()%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
}