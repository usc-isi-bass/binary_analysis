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

int sushu(int k)
{
   for(int i=2;i<=sqrt(k);i++)
   {
      if(k%i==0)
      {
         return 1;
         break;
       } 
    }
    return 0;
}
int main()
{
   int m=0;//m??????
   int i=0,j=0;//i,j???????
   int numb=0;//numb?i,m-i????????
   cin>>m;
   for(i=3;i<=m/2;i+=2)
      {
         j=m-i;
         numb=sushu(i)+sushu(j);
         if(numb==0)
         cout<<i<<' '<<j<<endl;
       }
    return 0;
}     