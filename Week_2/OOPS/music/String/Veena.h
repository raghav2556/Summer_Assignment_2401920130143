#ifndef VEENA_H
#define VEENA_H

#include<iostream>
using namespace std;
#include "../Playable.h"

class Veena : public Playable {
    public:
      void play() override {
        cout << "Playing Veena" << endl; 
      }
};

#endif