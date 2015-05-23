#ifndef JATEKMESTER_H
#define JATEKMESTER_H
#include <vector>
#include <widget.h>
#include <button.h>
#include <graphics.hpp>
#include <string>
#include <iostream>
struct JatekMester
{
bool xjon, xnyert, onyert;
int sorsz, aktualissor;
std ::string nyertes;

        JatekMester();
        virtual ~JatekMester();

    void work (std::vector <button*> &v);
    void torol ();
};

#endif // JATEKMESTER_H
