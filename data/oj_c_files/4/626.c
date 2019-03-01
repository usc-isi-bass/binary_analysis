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
   int a,b,i,j,q;
   cin>>a>>b;
   int m[a+1][b+1];     //??????? 
   for (i=1;i<=a;i++)
       for (j=1;j<=b;j++)
             cin>>m[i][j];    //??????????? 
   for (q=2;q<=a+b;q++)         //???????,??????????,?q 
     for (i=1,j=q-i;j>0;i++,j=q-i)    //????????????????? 
      {  if (j<=b&&i<=a)         //??????? 
           cout<<m[i][j]<<endl;
      }
   return 0;   
}
