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
	char str1[100],str2[100],a[100];
	int i,l1,l2,l,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",str1,str2);
		l2=strlen(str2);
        l1=strlen(str1);
		l=l1-l2;
		for(j=l2-1;j>=0;j--)
		{
			if(str1[l+j]>=str2[j]) 
				a[l+j]=str1[l+j]-str2[j];
			else 
			{
				a[l+j]=str1[l+j]+10-str2[j];
				str1[l+j-1]=str1[l+j-1]-1;
			}
		}
		for(j=0;j<l;j++) 
			a[j]=str1[j]-48; 
		for(j=0;j<l1;j++)
			printf("%d",a[j]);printf("\n");
	}
		    
			
}