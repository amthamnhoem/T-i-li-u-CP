#include<bits/stdc++.h>
using namespace std;

int main()
{
    char t;
    cin>>t;
    if(t=='a'){
        int a;
        int sum=0;
        while(cin>>a)
        {
            sum+=a;
        }
        cout<<sum;
    }else{
         float a;
        float sum=0;
        while(cin>>a)
        {
            sum+=a;
        }
        cout<<fixed<<setprecision(2)<<sum;
    }
}
