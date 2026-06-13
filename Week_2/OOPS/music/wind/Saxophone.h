#ifndef SAXOPHONE_H
#define SAXOPHONE_H

#include<iostream>
using namespace std;
#include "../Playable.h"

class Saxophone : public Playable {
    public:
      void play() override {
        cout << "Playing Saxophone" << endl;
      }
};

#endif