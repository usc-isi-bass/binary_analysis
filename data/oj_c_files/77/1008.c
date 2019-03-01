#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


char dui[150];
char nan;
char nv;
char dis;



int main()
{
    void deleted();
void peidui(int * left , int * right);
int iter,index,left,right;
   gets(dui);
    nan = dui[0];
    index = 1;
    while(dui[index] != '\0')
    {
        if(dui[index] != nan)
        {
            nv = dui[index];
            break;
        }
        index++;
    }
    deleted();
    index = strlen(dui)/2;
    for(iter = 0 ; iter != index ; ++iter)
    {
        peidui(&left,&right);
        printf("%d %d\n",left,right);
    }
    return 0;
}

void deleted()
{
    if('#' != nan && '#' != nv)
    {
        dis = '#';
    }
    else if('@' != nan && '@' != nv)
    {
        dis = '@';
    }
    else if('$' != nan && '$' != nv)
    {
        dis = '$';
    }
}

void peidui(int * left , int * right)
{
    int index = 0;
    int boysready = 0;
    while(dui[index] != '\0')
    {
        if(dui[index] == nan)
        {
            boysready = 1;
            *left = index;
        }
        else if(dui[index] == nv)
        {
            if(boysready)
            {
                *right = index;
                break;
            }
        }
        index++;
    }
    dui[*left] = dui[*right] = dis;
}