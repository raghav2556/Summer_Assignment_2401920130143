#include<bits/stdc++.h>
using namespace std;

class Box {
    protected:
      float l , b;

    public:
       Box(float l=0 , float b=0) {
        this->l = l;
        this->b = b;
       }

       void setDimensions(float l , float b) {
        this->l = l;
        this->b = b;
       }

       float area() {
        return l*b;
       }

       void displayArea() {
        cout << "Area: " << area() << endl;
       }
};

class Box3D : public Box {
    private:
      float h;

    public:
       Box3D(float l=0 , float b=0 , float h=0) : Box(l , b) {
        this->h = h;
       }

       void setDimensions(float l , float b , float h) {
        this->l = l;
        this->b = b;
        this->h = h;
       }

       float volume() {
        return l*b*h;
       }

       void displayVolume() {
        cout << "Volume: " << volume() << endl;
       }
};

int main() {
    Box b1(10 , 5);
    b1.displayArea();

    Box3D b2(10 , 5 , 4);
    b2.displayArea();
    b2.displayVolume();
}