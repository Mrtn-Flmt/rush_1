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

void h_rush(int x, char border, char in)
{

    int i;
    i = 0;
    
    while (i != x) {
        if (i == 0 || i == x - 1)
            my_putchar(border);
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
        if (i == 0 || i == y -1)
            h_rush(x, 'o', '-');
        else
            h_rush(x,'|' ,' '); 
        my_putchar('\n');
        i++;
    }
}

int rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        my_putchar("invalid size\n");
    else
    
        v_rush(x,y);

    return (0);
}

int main()
{
    rush(4,4);
}

