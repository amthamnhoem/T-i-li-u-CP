#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int x;
    while(cin>>x)
    {
        int t=sqrt(x);
       if(x==t*t) a.push_back(x);
    }
    cout<<a.size();
}
