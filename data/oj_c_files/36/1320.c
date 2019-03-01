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
{ char a[100],b[100];
int n,m,i,j,sum=0;
scanf("%s %s",a,b);
n=(int)strlen(a);
m=(int)strlen(b);
if(n==m)
{ 
	for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if(a[i]==b[j])
		{
			b[j]=0;
		    break;
		}

			
	}
	
}
}
for(j=0;j<m;j++)
{
	if(b[j]!=0)
	{  
		sum=sum+1;
	}
	else
	{
		continue;
	}
}
if(sum==0)
printf("YES");
if(sum!=0)
printf("NO");
       

	return 0;
}
