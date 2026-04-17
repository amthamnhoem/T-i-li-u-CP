#include <bits/stdc++.h>
using namespace std;

struct Point {
    double x, y;
};

Point operator + (Point a, Point b) {
    return {a.x + b.x, a.y + b.y};
}

Point operator - (Point a, Point b) {
    return {a.x - b.x, a.y - b.y};
}

int main() {
    Point A, B;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;

    Point sum = A + B;
    Point diff = A - B;

    cout << fixed << setprecision(2);
    cout << "(" << sum.x << ", " << sum.y << ")\n";
    cout << "(" << diff.x << ", " << diff.y << ")\n";

    return 0;
}
