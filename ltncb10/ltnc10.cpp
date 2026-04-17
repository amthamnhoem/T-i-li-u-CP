#include<bits/stdc++.h>
using namespace std;
int kt(int x)
{
    int demuoc=0;
    for(int i=1;i<=x;i++) if(x%i==0) demuoc++;
    return demuoc;
}
int main()
{
    freopen("output.txt","w",stdout);
    int x;
    while(cin>>x){

        if(kt(x)==2){
            cout<<x<<" ";
        }
    }
}
