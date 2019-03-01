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

int main ()
{
   char a[50],b[50];
   int i,k,flag=0;
   cin >> a>> b;
   for(i=0;b[i]!='\0';i++)
   {
	    if(a[0]==b[i])
		{
		   for(k=1;a[k]!='\0';k++)
			   if(a[k]!=b[i+k])
			   {
				   flag=1;
				   break;
				}
			if(flag==0)
			{
				cout << i<<endl;break;
			}
		 }
   }
   return 0;
}


