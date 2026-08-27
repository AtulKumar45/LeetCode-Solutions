#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int sign;
    if(x >= 0)
    sign = 1;
    else sign = -1;

    long long num = x;

    if(num < 0)
    num = (-1)*num;

    long long sum = 0;
    while(num != 0)
    {
        int r = num % 10;
        sum = sum*10 + r;
        num /= 10;  
    }
    sum = sign*sum;
    
    if(sum > INT_MAX || sum < INT_MIN)
    return 0;
    
    return (int)sum;
}
int main()
{
    int x;
    cin>>x;
    cout<<reverse(x);
    
    return 0;
}