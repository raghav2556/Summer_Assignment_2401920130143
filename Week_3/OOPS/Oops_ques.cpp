#include<bits/stdc++.h>
using namespace std;

class compartment {
    public:
     virtual string notice() = 0;
     virtual ~compartment() {}
};

class firstclass : public compartment {
    public:
     string notice() override {
        return "First Class: This compartment is first class";
     }
};

class ladies : public compartment {
    public:
      string notice() override {
        return "Ladies: This compartment is only for ladies";
      }
};

class General : public compartment {
    public:
      string notice() override {
        return "General: This compartment is general class";
      }
};

class Luggage : public compartment {
    public:
      string notice() override {
        return "Luggage: This compartment is for luggage";
      }
};

int main() {
    srand(time(0));

    compartment* compartment[10];

    for (int i=0; i<10; i++) {
        int choice = rand() % 4 + 1;

        switch(choice) {
            case 1:
              compartment[i] = new firstclass();
              break;
            case 2:
               compartment[i] = new ladies();
               break;
            case 3:
               compartment[i] = new General();
               break;
            case 4:
               compartment[i] = new Luggage();
               break;
        }
    }

    cout << "Compartment Notices: " << endl;

    for (int i=0; i<10; i++) {
        cout << "Compartment " << i+1 << ": " << compartment[i]->notice() << endl;
    }

    for (int i=0; i<10; i++) {
        delete(compartment[i]);
    }
}