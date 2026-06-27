#include<bits/stdc++.h>
using namespace std;

class Outer {
    public:
      void display() {
        cout << "This is Outer class" << endl;
      }

      class Inner {
        public:
         void display() {
            cout << "This is Inner class" << endl;
         }
      };
};

int main() {
    Outer obj1;
    Outer::Inner obj2;

    obj1.display();
    obj2.display();
}