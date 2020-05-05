/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** put_float
*/

#include <math.h>

#include <my_printf_tools.h>

double dmod(double x, double mod)
{
    long long i = (x / mod);
    return (!mod ? x : x - mod * i);
}

void putfloat(double nbr, int size)
{
    long long d = nbr, t = 0;
    nbr = nbr - (long long)nbr;
    nbr_ll(d);
    write(1, ".", 1);
    d = 0;
    for (int i = 0; i < size; i++) {
        if (size >= 18 && i + 1 == size) {
            d = round(nbr);
            if (d > 10) d = d / 10;
        }
        else
            nbr = dmod(nbr, 1) * 10;
        d = nbr;
        pchar_i((long)d + 48);
    }
}