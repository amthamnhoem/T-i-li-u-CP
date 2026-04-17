#include<bits/stdc++.h>
using namespace std;
int virus(int Time){
    if(Time==0) return 1;
    else return virus(Time-1)*2;
}
int main()
{
    int Time; cin>>Time;
    cout<<virus(Time);
}
