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

//???????
int main()
{
   int num[100],n,k;
   cin>>n>>k;
   int i=0;
   for(int j=0;j<=n;j++)
	   num[j]=k;
  
   do
   {
     num[n]=num[n]+n;
	for(i=n-1;i>=1;i--)
	{
	  if(num[i+1]%(n-1)!=0)
		  break;
	  else
		  num[i]=num[i+1]*n/(n-1)+k;
	
	}
   }
   while(i>=1);
		cout<<num[1]<<endl;
	
   return 0;
   
   }
   