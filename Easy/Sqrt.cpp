#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
        for (long long i = 0; i <= x; i++) {
            if (i * i > x)
                return i - 1;
        }

        return x;
    }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin>>x;
    cout<<mySqrt(x);
   
    return 0;
}