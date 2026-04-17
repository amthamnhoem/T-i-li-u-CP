#include<bits/stdc++.h>
using namespace std;
struct Point{
    float x,y;
};
bool operator > (Point a,Point b){
    return (a.x>b.x) || (a.x==b.x && a.y>b.y);
}
bool operator < (Point a,Point b){
    return (a.x<b.x) || (a.x==b.x && a.y<b.y);
}
int main()
{
    Point a,b;
    cin>>a.x>>a.y>>b.x>>b.y;
    if(a>b){
        cout<<"lon hon";
    }else if(a<b){
        cout<<"nho hon";
    }else {
        cout<<"trung nhau";
    }
}
