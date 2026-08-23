#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
   set<int>st;
   while(n != 1)
   {
   int cnt = st.count(n);
   if(cnt)
   return false;
   st.insert(n);
   int sum = 0;
   while(n > 0)
   {
    int num = n % 10;
    sum += num*num;
    n /= 10;
   }
   n = sum;
}
return true; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    cout<<isHappy(n);

    return 0;
}