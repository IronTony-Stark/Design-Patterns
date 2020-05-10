#include <iostream>
#include "RedColor.h"
#include "GreenColor.h"
#include "BlueColor.h"
#include "RectangleShape.h"
#include "TriangleShape.h"
#include "CircleShape.h"

using namespace std;

int main() {
    RedColor red;
    GreenColor green;
    BlueColor blue;

    RectangleShape rectangle(red);
    TriangleShape triangle(green);
    CircleShape circle(blue);

    cout << rectangle.getColor() << " " << rectangle.getShape() << "\n";
    cout << triangle.getColor() << " " << triangle.getShape() << "\n";
    cout << circle.getColor() << " " << circle.getShape() << "\n";
}
