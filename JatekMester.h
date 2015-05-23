#ifndef JATEKMESTER_H
#define JATEKMESTER_H
#include <vector>
#include <widget.h>
#include <button.h>
#include <graphics.hpp>

struct JatekMester
{
bool xjon, xnyert, onyert;
int sorsz, aktualissor;

        JatekMester();
        virtual ~JatekMester();

    void work (std::vector <button*> &v);
};

#endif // JATEKMESTER_H
