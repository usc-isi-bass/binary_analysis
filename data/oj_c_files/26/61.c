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

//????   ???  1000010334 
/*
????(1)??dev?????'\0'?  ??' ';
        (2)??grids?????'\b'???; 
*/ 
int main()
{
    int i=0;  // ??? 
    int j=0;
    char a[100];  //??????? 
    char chu=0;
    for(i=0;i<100;i++)
    {
        a[i]='\0';
    }
    i=0;
    a[0]=getchar();
    cout<<a[0];
    while(chu=getchar())
    {
        if(chu=='\n')
        {
            break;
        }
        else
        {
            a[i]=chu;
            if((a[i-1]==' '&&a[i]!=' ')||(a[i-1]!=' '))
            {
                cout.put(a[i]);
            }
            i=i+1;
        }
    }
    return 0;
}