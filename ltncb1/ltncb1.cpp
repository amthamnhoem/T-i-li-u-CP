#include <bits/stdc++.h>
using namespace std;
double tinhDienTich(double r) {
    const double PI = 3.14;
    return PI * r * r;
}
double tinhDienTich(double length, double width) {
    return length * width;
}

int main() {
    double r;
    double l, w;
    cin >> r;
    cin >> l>>w;

    cout<< fixed << setprecision(2)<< tinhDienTich(r) << endl;
    cout<< fixed << setprecision(2)<< tinhDienTich(l, w) << endl;
    return 0;
}
