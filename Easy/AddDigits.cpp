#include <bits/stdc++.h>
using namespace std;

int addDigits(int num)
{
    string n = to_string(num);
    int sum = 0;
    for(auto it : n)
    sum += it - '0';
    
    if( sum < 10 )
    return sum;
    else return addDigits(sum);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin>>num;
    cout<<addDigits(num)<<endl;

    return 0;
}