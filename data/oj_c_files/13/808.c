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
   int n,i=1,k;
   cin>>n;
   int a[20000];   //??????????
   cin>>a[0];            //?????????????
   while(cin>>a[i])    
   {
	   i++;
	   if(i==n) break;
   }                   //??????????n???
   cout<<a[0];    //???a[0]
   i=1;
   while(i<n)
   {
	   int mid=0;
	   for(k=0;k<i;k++)
	   {	
		   if(a[i]==a[k])
		   {
			   mid=1;break;}        //?a[i]???????????????
	   }
	   if(mid==0)
		   cout<<" "<<a[i];      //???????a[i]
       i++;
   }
   cout<<"\n";
   return 0;
}