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

int a[40] = {2}, b[40] = {2};
int n;
void sum(int c1, int c2)
{
     if(c1 == n)
     { 
     for(int i = c2 - 1; i >= 0; i--)
             cout<<a[i];
     cout<<endl;
     }
     else
     {
         if(a[c2 - 1] + b[c2 - 1] >= 10)                 //???? 
            c2++;
         for(int i = 0; i < c2; i++)                     //??n????? ?? 
         {
                         a[i] = (a[i] + b[i]) % 10;
                         a[i + 1] = (b[i] + b[i]) / 10 + a[i + 1];
                         b[i] = a[i];
         }
         sum(c1 + 1, c2);
     }
}
int main()
{
    cin>>n;
    if(n == 0)
    {
         cout<<1<<endl;
         return 0;
    } 
    for(int i = 1; i < 40; i++)
            a[i] = 0, b[i] = 0; 
    sum(1, 1);
    return 0;
}
