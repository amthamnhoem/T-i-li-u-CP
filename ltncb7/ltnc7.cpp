#include<bits/stdc++.h>
using namespace std;

int main()
{
    char t;
    cin>>t;
    if(t=='a'){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max({a,b,c});
    }else if(t=='b'){
        float a,b,c;
        cin>>a>>b>>c;
        cout<<fixed<<setprecision(2)<<max({a,b,c});
    }else{
        char a,b,c;
        cin>>a>>b>>c;
         cout<<max({a,b,c});
    }
}
