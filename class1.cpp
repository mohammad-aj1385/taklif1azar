#include <bits/stdc++.h>
using namespace std;
class shape{
    private : 
    double area;
    public:
    void calture_area();
    void display_area();
};
class circle :shape{
    private:
    public:
    double ans;
    double redius;
    void calture_area() {
        ans = 3.14 * redius * redius;
        cout << ans << endl;

    }
    void display_area() {
        cout << "redius :" << redius << endl;
        cout << "area:" << ans << endl;
    }
};
class rectangle :shape{
    private:
    public:
    double lenth;
    double width;
    double ans1;
    void calture_area() {
        ans1 = lenth * width ;
        cout << ans1 << endl;
    }
    void display_area() {
        cout << "lenth:" << lenth << " " << "width:" << width << endl;
        cout << "area:" << ans1 << endl;
    }
};
int main() {
    circle c;
    rectangle r;
    cin >> c.redius;
    c.calture_area();
    c.display_area();
    cin >> r.lenth;
    cin >> r.width;
    r.calture_area();
    r.display_area();
}