    #include<bits/stdc++.h>
    using namespace std;
    int A(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n%2==0) return A(n/2);
        else return A(n/2)+A(n/2+1);
    }
    int main()
    {
        int ans=0;
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            ans=max(ans , A(i));
        }
        cout<<ans;
    }
