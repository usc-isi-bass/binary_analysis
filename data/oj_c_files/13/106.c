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

int main()
{
 int n,a[101],number,i;   //n????a?????????????number????
                          //????????i
 cin>>n;
 for(i=1;i<=100;i++)
  a[i]=0;                 //???a????0
 cin>>number;
 cout<<number;
 a[number]=1;
 for(i=1;i<=n-1;i++)
  {
   cin>>number;           //?????
   if(a[number]==0)       //?a[number]?0????????
    {
     a[number]=1;         //?a[number]??1??????
     cout<<" "<<number;   //????????
    }
   }
 return 0;
}