#include<bits/stdc++.h>
using namespace std;
int kt(int x)
{
    int dem=0;
    for(int i=1;i<=x;i++) if(x%i==0) dem++;
    if(dem==2) return 1;
    else return 0;
}
signed main()
{
    vector<int>a;
    int val;
    while(cin>>val)
    {
        if(kt(val)==0) a.push_back(val);
    }
    sort(a.begin(),a.end());
    for(auto v : a) cout<< v <<" ";
}
