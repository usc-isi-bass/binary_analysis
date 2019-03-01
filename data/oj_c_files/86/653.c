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
	int i,j,n,m,t[100],k[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0)
		{
			t[i]=60;
		}
		else
		{
			for(j=1;j<=m;j++)
			{
			   scanf("%d",&k[j]);
			}
		    for(j=1;j<=m;j++)
			{
			   if(k[j]+j*3>=63)
			   {
				   t[i]=63-j*3;
				   break;
			   }
			   else if(k[j]+j*3>=60)
			   {
				   t[i]=k[j];
				   break;
			   }
			   else
			   {
				   t[i]=60-3*m;
			   }
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i>0)
			printf("\n");
		printf("%d",t[i]);
	}
	return 0;
}





















			