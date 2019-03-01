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
    int n , k , m , num , c=0;
    cin >>n>>k;
    for (int i=1;;i++)//????????????????????????
	{
	   num=n*i+k;//?num?????
	   for (int j=1;j < n;j++)//??n-1???????
	   {
	      if ((num*n)%(n-1)!=0) break;//???????????????
	      else 
		  {
		     num=num*n/(n-1)+k;
	              if (j==n-1) 
	           {
		     cout <<num<<endl;
		     c=c+1;//????????????
		     break;
	           }
		  }
	   }
	   if (c==1) break;
	}
	return 0;
	
}
