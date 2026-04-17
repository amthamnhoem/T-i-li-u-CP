#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int x;
    while(cin>>x)
    {
        a.push_back(x);
    }
    for(int i=0;i<a.size()) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=a.size()-1;i>=0;i--) cout<<a[i]<<" ";
}
