#include<bits/stdc++.h>
using namespace std;
stack<int>binary;
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        binary.push(n%2);
        n/=2;
    }
    while(!binary.empty())
    {
        cout<<binary.top();
        binary.pop();
    }
}
