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
{int cur=0,stack[100],sum=0;
 char x,sign;
 sign=cin.peek();
 do
 {
  cin>>x;
  if(x==sign)
   stack[cur++]=sum++;
  else 
   cout<<stack[--cur]<<' '<<sum++<<endl;
 }while(cur>0);
 return 0;
}