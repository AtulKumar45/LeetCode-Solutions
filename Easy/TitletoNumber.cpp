#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string columnTitle;
    cin>> columnTitle;
    int columnNum = 0;
    for(int i = 0; i < columnTitle.length() ; i++)
    {
        columnNum = columnNum * 26 + (columnTitle[i] - 'A' + 1); 
    }
    cout<<columnNum;

    return 0;
}