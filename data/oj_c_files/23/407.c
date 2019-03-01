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

/*
 *????HW6_12.cpp
 *??????1100019007?
 *???2012-11-08
 *???????
 */ 
char words[110][110];//??? 
int main()
{
    int i;
    int n;
    char c;
    i=0;
    while(cin>>words[i])
    {
        i++;
        c=cin.get();
        if(c=='\n')break;
    }//????(??????)
    n=i;//????
    for(i=n-1;i>=0;i--)
    { 
       cout<<words[i];//????
       if(i)cout<<' ';
    }
    cout<<endl;
    return 0;//????
} 
