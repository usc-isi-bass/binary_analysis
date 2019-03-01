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
	int n,i,j,p,l,k,q;
	char s1[100][100],s2[100][100],a[100],t[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",s1[i],s2[i]);
	}

	for(i=0;i<n;i++)
	{	
        l=0;
		p=strlen(s1[i]);
        q=strlen(s2[i]);
        for(j=p-q-1;j<p;j++)
		{t[l++]=s1[i][j];}
		for(j=q;j>=1;j--)
		{
		    if(t[j]>=s2[i][j-1])
			     a[j]=(t[j]-s2[i][j-1]);
		    else
			{
			    a[j]=(t[j]+10-s2[i][j-1]);
				t[j-1]=t[j-1]-1;
			}
		}
			a[0]=t[0]-'0';
			for(k=0;k<p-1-q;k++)
			{
					printf("%c",s1[i][k]);
			}
			for(k=0;k<=q;k++)
			{
				printf("%d",a[k]);
			}
			printf("\n");
		}
}