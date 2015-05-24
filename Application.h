#ifndef APPLICATION_H
#define APPLICATION_H
#include <graphics.hpp>
#include <vector>
#include "button.h"
#include "JatekMester.h"
#include "widget.h"


struct Application
{
   int X,Y;
        Application(int a, int b);
         genv::   event ev;

      std::  vector <button*> v;
        virtual ~Application();
       button* p;
    JatekMester* q;
    void ciklus();
};

#endif // APPLICATION_H
