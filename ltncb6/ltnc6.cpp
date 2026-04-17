#include<bits/stdc++.h>
using namespace std;
struct Point
{
    float x,y;
};
Point Max(Point a,Point b)
{
    if(a.x>b.x) return a;
    else if(a.x==b.x)
    {
        if(a.y>b.y) return a;
        else return b;
    }
    else return b;
}
Point operator + (Point a,Point b)
{
    return {a.x+b.x,a.y+b.y};
}
Point a[10001];
int main()
{
    int n;
    cin>>n;
    a[n+1].x=-99999;
    a[n+1].y=-99999;

    a[0].x=0;
    a[0].y=0;
    for(int i=1; i<=n; i++)
    {

        cin>>a[i].x>>a[i].y; // nhập tọa độ

    }
    for(int i=1;i<=n;i++){
        a[0].x+=a[i].x;
        a[0].y+=a[i].y;
        a[n+1]=Max(a[i],a[n+1]);
    }
    cout<<fixed<<setprecision(2)<<"("<<a[n+1].x<<", "<<a[n+1].y<<")"<<endl;
    cout<<fixed<<setprecision(2)<<"("<<a[0].x<<", "<<a[0].y<<")"<<endl;
}
