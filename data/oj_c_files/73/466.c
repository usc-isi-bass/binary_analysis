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

//****************************************
//*???????                            **
//*????? 1100013004                     **
//*???2010.10.28                          **
//****************************************
int main() 
{  
    int a[6][6] = {0},l[6] = {0},h[6] = {0},i,j,flag = 1;//*l[6],h[6]??????????? ** 
    for(i = 0;i < 5;i++) 
       for(j = 0; j < 5;j++)
          cin>>a[i][j];
    for(i = 0;i < 5;i++)
       {
           l[i] = 0;
           for (int j=0;j<5;j++) if (a[i][j]>l[i]) l[i] = a[i][j];
           h[i] = 100000000;
           for (int j=0;j<5;j++) if (a[j][i]<h[i]) h[i] = a[j][i];        
       }
    for(i = 0;i < 5;i++) 
       for(j = 0; j < 5;j++)
       {
             if (a[i][j] == l[i] && a[i][j] == h[j])
             {cout<<i+1<<' '<<j+1<<' '<<a[i][j]<<endl;
             flag = 0;}
       }
    if(flag)
       cout<< "not found"<<endl;

    return 0;
}
