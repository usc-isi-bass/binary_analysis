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

void main() 
{ 
	int n[100],m[100],i,j=0,s[100]={0}; 
	for(i=0;;i++)
	{
		scanf("%d",&n[i]); 
		scanf("%d",&m[i]); 
		if(n[i]==1)
			s[i]=0;
		if(m[i]==1)
			s[i]=n[i]-1;
		if(n[i]>1&&m[i]>1)
		{
	       for(j=2;j<=n[i];j++)
		   {
		      s[i]=(s[i]+m[i])%j;/*???????????????0?m-1?????????????k=m%n-1,
		 		  ???????????m%n?????0???????????n-1????????
				  ???????n-1???????????t???????????????????t
				  +k?%n???????*/
		   }
		}
		if(n[i]==0&&m[i]==0)
			break;
	}
	for(i=0;n[i]!=0;i++)
	{
		printf("%d\n",s[i]+1); 
	}
} 
