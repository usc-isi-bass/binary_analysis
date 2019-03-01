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

int sum=0,g,f;
int divide (int chushu,int a)
{
    int i;
    for (i=chushu;i<=a;i++)
    {
        if (a%i==0)
        {
            f=a/i;
            if (f>1)
            {g=i;divide (g,f);}
            else
            {
                sum++;
            }
         }

}   return sum;
}
int main()
{
    int n=0;
    cin>>n;
    int p=0;
    for (p=0;p<n;p++)
    {
       int b=0,c=2;
       cin>>b;
    sum=0;
    cout<<divide (c,b)<<endl;
    }

    return 0;
}