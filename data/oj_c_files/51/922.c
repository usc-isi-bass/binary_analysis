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
	int m,n,i,ii=0,j,k,num[511]={0},p=0,q=0,s=0,v,mm,nn;
	char a[511],b[511][511],max[511];
	scanf("%d",&m);
	getchar();
	gets(a);
	n=strlen(a);
	for(i=0;i<=n-m;i++)
	{ii=0;
	for(j=0;j<m;)
		
	{
		b[p][j]=a[i+ii];
		ii+=1;
		
		j+=1;
	}
	
	
	b[p][j]='\0';
				
				p+=1;
				
	}
	for(q=0;q<=n-m;q++)
	{
		for(s=q;s<=n-m;s++)
		{
			if(strcmp(b[q],b[s])==0)
			{
				num[q]+=1;
			}
		}
	}
	mm=num[0];
	for(v=0;v<=n-m;v++)
	{
		if(num[v]>mm)
			mm=num[v];
	}
	if(mm>1)
	{
		printf("%d\n",mm);
		for(v=0;v<=n-m;v++)
		{
			if(num[v]==mm)
			{
				printf("%s\n",b[v]);
				
			}
		}
	}
	else
		printf("NO");
	return 0;
}
