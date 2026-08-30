#include <bits/stdc++.h>
using namespace std;

vector<string> fizzbuzz(int n)
{
    vector<string> answer;
    for(int i = 0; i < n ; i++)
    {
        if((i+1) % 3 == 0 && (i+1) % 5 == 0)
        answer.push_back("FizzBuzz");
        else if( (i+1) % 3 == 0)
        answer.push_back("Fizz");
        else if((i+1) % 5 == 0)
        answer.push_back("Buzz");
        else answer.push_back(to_string(i+1));

    }
    return answer;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin>>n;
    for (auto it : fizzbuzz(n))
    cout<<it<<" ";
    return 0;
}