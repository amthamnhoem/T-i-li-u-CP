#include<bits/stdc++.h>
using namespace std;
struct Point{
    float x,y;
};
Point operator ++ (Point a){
    a.x++;
    a.y++;
    return a;
}
Point operator -- (Point a){
   a.x--;
   a.y--;
   return a;
}
int main()
{
    Point a;
    cin>>a.x>>a.y;
    a=++a;
    cout<<fixed<<setprecision(2)<<"("<<a.x<<","<<a.y<<")"<<endl;
    a=--a;
    a=--a;
    cout<<fixed<<setprecision(2)<<"("<<a.x<<","<<a.y<<")"<<endl;
}
