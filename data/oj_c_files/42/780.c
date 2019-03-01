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
    int n,s[100000],m,i,tmp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
}
    scanf("%d",&m);
	for(i=0;i<n;i++)
    {
       if((s[i]!=m)&&(tmp==0)) 
	   {
		   printf("%d",s[i]);
		   tmp=1;
	   }
	   else if((s[i]!=m)&&(tmp==1))
	   {
		   printf(" %d",s[i]);
	   }
	   
    }
   return 0;
}