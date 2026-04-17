#include<bits/stdc++.h>
using namespace std;
stack<int>brackets;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') brackets.push(i);
        else {
            if(brackets.size()==0){
                cout<<"NO";
                return 0;
            }else brackets.pop();
        }

    }

    if(brackets.size()==0) cout<<"YES";
    else cout<<"NO";
}
