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


char a[1000];//????? 

int xx (int k)
{
     int x=k,y=k+1;//??????? 
     while (a[y]==a[x])//????????? 
     y=xx(y);
     cout <<x<<" "<<y<<endl;//?? 
     return y+1;
}

int main ()
{
    cin.getline(a,999,'\n');
    xx(0);
    return 0;
}
