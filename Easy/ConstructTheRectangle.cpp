#include <bits/stdc++.h>
using namespace std;

vector<int> constructRectangle(int area)
{
    int w = (int)sqrt(area);
    while(area % w != 0)
    w--;
    int l = area / w;
    return {l,w};    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int area;
    cin>>area;
    for(auto it : constructRectangle(area))
    cout<<it<<" ";

    return 0;
}