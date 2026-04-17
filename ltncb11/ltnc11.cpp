#include<bits/stdc++.h>
using namespace std;
int tonguoc(int x)
{
    int tong=0;
    for(int i=1;i<=x;i++) if(x%i==0) tong+=i;
    return tong;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int x;
    int ma=0;
    int ans=0;
    while(cin>>x){
        if(tonguoc(x)>ma){
            ma=tonguoc(x);
            ans=x;
        }
    }
    cout<<ans;
}
