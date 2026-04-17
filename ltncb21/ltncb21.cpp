#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100001];
queue<int>q;
int main()
{
    cin>>n>>k;
    k%=n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i<=k) q.push(a[i]);
        else cout<<a[i]<<" ";
    }
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
}