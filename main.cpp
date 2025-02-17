#include <iostream>
using namespace std;

int main() {
    int width, height;

    // دریافت ابعاد مستطیل از کاربر
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // محاسبه مساحت و محیط
    int area = width * height;
    int perimeter = 2 * (width + height);

    // نمایش مساحت و محیط
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;

    // چاپ شکل مستطیل
    cout << "Rectangle shape: " << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
