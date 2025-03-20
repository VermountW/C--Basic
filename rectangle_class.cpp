#include <iostream>
using namespace std;
class RECT  {
    public:
       int x,y, w,h;
       string color;
    RECT(int x, int y){
        this->x = x;
        this->y = y;
        w = 100;
        h = 100;
        color = "WHITE";
    }
    RECT(int x, int y, int w, int h, string color){
        this->x = x;
        this->y = y;
        this->w = w;
        this->h = h;
        this->color = color;
    }
    void  printData(){
          cout << x << " " << y << " " << w << " " << h << " " << color << endl; 
    }
};

int main(){
    RECT  rect1(300,200), rect2(400,500, 50, 40, "GREEN");
    rect1.printData();
    rect2.printData();
}