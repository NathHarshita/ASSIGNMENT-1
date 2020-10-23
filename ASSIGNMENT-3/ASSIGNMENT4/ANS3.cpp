
#include<iostream>
using namespace std;
class Quadrilateral {
public:
void propertyofQuard() {
cout<< "A quadrilateral should be closed shape with 4 sides. All the internal angles of a quadrilateral sum up to 360°" << "\n";
}
};
class Trapezoid: public Quadrilateral {
public:
void propertyoTrapezoid() {
cout << "A Trapezoid have parallel sides" << "\n";
}
//sum of parallel side... divided by 2 multipiled by height
int areaTrapezoid(int a, int b, int h) {
return (a + b) * h / 2;
}
int perimeterTrapezoid(int s1, int s2, int s3, int s4)
{
return s1 + s2 + s3 + s4;
}
};
class Paralleologram : public Trapezoid {
public:
void propertyofParalleogram() {
cout << "A paralleologram have pair of parallel and equal sides" << "\n";
}
int areaPalleogram(int base, int height)
{
return base * height;
}
int perimeterPalleogram(int a, int b)
{
return 2 * (a + b);
}
};
class Rectangle : public Paralleologram {
public:
void propertyofRectangle() {
cout << "It have a pair of parallel and equal sides and all angles are of 90deg."
<< "\n";
}
int areaRectangle(int a, int b)
{
return a * b;
}
int perimeterRectangle(int a, int b)
{
return 2 * (a + b);
}
};
class Square : public Rectangle {
public:
void propertyofSquare() {
cout << "All sides of Square are equal and all angles of 90 deg" << "\n";
}
int areaSquare(int s) {
return s * s;
}
int perimeterSquare(int s) {
return 4 * s;
}
};
int main() {
Square obj;
obj.propertyofQuard();
cout << "area using Square with side 8 " << obj.areaSquare(8) << endl;
cout << "perimeter using Square with side 8  " << obj.perimeterSquare(8) << endl;
cout << "finding area using Square with side 8 using Rectangle's formula " <<
obj.areaRectangle(8, 8) << endl;
cout << "finding area using Square with side 8  using Paralleologram 's formula " <<
obj.areaPalleogram(8, 8) << endl;
cout << "finding area using Square with side 8 using Trapezoid 's formula " <<
obj.areaTrapezoid(8, 8, 8) << endl;}
