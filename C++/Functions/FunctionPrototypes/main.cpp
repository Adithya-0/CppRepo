#include <iostream>
#include <vector>
using namespace std;
double area_circle(int radius);
int area_rectangle(int length, int breadth);

int main(){
    int r = 12;
    int l = 12;
    int b = 2;
    double areaOfCircle = area_circle(r);
    int areaRectangle = area_rectangle(l,b);
    cout << "Area of circle is " << areaOfCircle << endl;
    cout << "Area of rectangle is " << areaRectangle << endl;
    
}

double area_circle(int radius){
    return 3.14 * radius * radius;
}
int area_rectangle(int length, int breadth){
    return length * breadth;
}