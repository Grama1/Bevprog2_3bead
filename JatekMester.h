#ifndef JATEKMESTER_H
#define JATEKMESTER_H
#include <vector>
#include <widget.h>
#include <button.h>
struct JatekMester
{
bool xjon, xnyert, onyert;
int sorsz;

        JatekMester();
        virtual ~JatekMester();

    void work (std::vector <button*> &v);
};

#endif // JATEKMESTER_H
