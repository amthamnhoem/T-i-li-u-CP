#include<bits/stdc++.h>
using namespace std;
int sum(int num , int P){
    if(P==0) return 1;
    return pow(num,P)+sum(num,P-1);
}
int main()
{
    int num,P; cin>>num>>P;
    cout<<sum(num,P);
}
