/*
** EPITECH PROJECT, 2020
** rush.c
** File description:
** My first rush in c
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void h_rush(int x, char border_left,char border_right, char in)
{

    int i;
    i = 0;
    
    while (i != x) {
        if (i == 0)
            my_putchar(border_left);
        if (i == x - 1)
            my_putchar(border_right);
        else
            my_putchar(in);
        i++;
    }
}

void v_rush(int x, int y)
{
    int i;
    i = 0;

    while (i != y)
    {
        if (i == 0)
            h_rush(x, '/','\\','*');
        else if (i == y - 1)
            h_rush(x, '\\', '/', '*');
        else
            h_rush(x, '*','*',' ');
        my_putchar('\n');
        i++;
    }
}

void special_display(int x, int y)
{
    int i = 0;
    int situation = 0;

    if (x < y)
        situation = y;
    else
        situation = x;
    while (i != situation) {
        my_putchar('*');
        if (situation == y)
            my_putchar('\n');
        i++;
    }
    if (situation == x)
        my_putchar('\n');
}

int rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        write(2,"invalid size\n",13);
    else if (x ==  1 ||  y == 1) 
        special_display(x,y);
    else 
        v_rush(x,y);

    return (0);
}

int main()
{
    rush(5,1);
}
