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
	int n,i,j;
	int m;
	int f=0;
	char a[200][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		m=strlen(a[i]);
		for(j=0;j<m;j++)
		{   if(a[i][0]>47&&a[i][0]<58)
		{
			printf("no\n");
			f=1;
			break;
		}
			 else if(a[i][j]>47&&a[i][j]<58)
			{	
			}
			else if(a[i][j]>64&&a[i][j]<91)
			{
			}
			else if(a[i][j]>96&&a[i][j]<123)
			{
			}
			else if(a[i][j]=='_')
			{}
			else 
			{	printf("no\n");
		
			f=1;
			break;
			
			}
		}
			if(f==0)
				printf("yes\n");
			else
				f=0;





	}
}