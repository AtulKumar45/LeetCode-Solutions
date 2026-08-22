#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int sum = 0;
    int sign;
    if(x >= 0)
    sign = 1;
    else 
    {
        sign = -1;
        x = (-1)*x;
    }
    while(x != 0)
    {
        int r = x % 10;
        sum = sum*10 + r;
        x /= 10;  
    }
    int num = sign*sum;
    cout<<num;

    return 0;
}