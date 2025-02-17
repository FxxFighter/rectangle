#include <iostream>
using namespace std;

// تعریف ساختار مستطیل
struct Rectangle {
    int width;
    int height;

    // تابع برای محاسبه مساحت
    int area() {
        return width * height;
    }

    // تابع برای محاسبه محیط
    int perimeter() {
        return 2 * (width + height);
    }

    // تابع برای چاپ شکل مستطیل
    void printShape() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    Rectangle rect;

    // دریافت ابعاد مستطیل از کاربر
    cout << "Enter the width of the rectangle: ";
    cin >> rect.width;
    cout << "Enter the height of the rectangle: ";
    cin >> rect.height;

    // نمایش مساحت و محیط
    cout << "Area of rectangle: " << rect.area() << endl;
    cout << "Perimeter of rectangle: " << rect.perimeter() << endl;

    // چاپ شکل مستطیل
    cout << "Rectangle shape: " << endl;
    rect.printShape();

    return 0;
}
