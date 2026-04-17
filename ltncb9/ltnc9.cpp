#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int x;
    while(cin>>x){
        int t=sqrt(x);
        if(t*t==x){
            cout<<x<<" ";
        }
    }
}
