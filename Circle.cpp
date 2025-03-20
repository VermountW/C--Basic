#include <iostream>
#include <cmath>
using namespace std;
class Circle {
      private:
          float radius;
      public:
          Circle(float r = 1 ) {
              radius = r;
          }
          float Perimeter() {
              return 2 * radius * M_PI;
          }
          float Area(){
              return radius * radius * M_PI;
          }
          float Get_radius() {
              return radius;
          }
          void Set_radius( float r ){
              radius = r;
          }
};

int main() {
    Circle  *c1;
    c1 = new Circle(30.0);

    cout << "radius=" << c1->Get_radius() << endl;
    cout << "Area of circle c1=" << c1->Area() << endl;
    cout << "Perimeter of circle c1= " << c1->Perimeter() << endl;
}