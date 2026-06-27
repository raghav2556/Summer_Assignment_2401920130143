#include<bits/stdc++.h>
using namespace std;

class Test {
    public:
      virtual int square(int x) = 0;
};

class Arithmetic : public Test {
    public:
      int square(int x) override {
        return x*x;
      }
};

class TotestInt {
    public:
      void display() {
        Arithmetic obj;
        int num;

        cout << "Enter Number: ";
        cin >> num;

        cout << "Square: " << obj.square(num);
      }
};

int main() {
    TotestInt t;
    t.display();
}