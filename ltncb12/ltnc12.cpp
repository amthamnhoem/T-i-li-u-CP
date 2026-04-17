#include<bits/stdc++.h>
using namespace std;
float last_money(int Time){
    if(Time==0) return 1;
    else return last_money(Time-1)*1.07;
}
int main()
{

    int Time; cin>>Time;
    cout<<fixed<<setprecision(2)<<last_money(Time);
}
