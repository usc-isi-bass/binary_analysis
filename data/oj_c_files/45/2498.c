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
	char a[100],b[1003],c[100];
	scanf("%s%s",a,b);
	int i,j,num=0,k=-1;
	for(i=0;a[i]!='\0';i++)
	{
		num=num+1;
	}
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\n';j++)
		{
			if(a[i]==b[j])
				break;
				
			
		}
		printf("%d",j);
		break;
	}
	for(i=j;i<=num+j;i++)
	{	k=k+1;
		c[k]==b[i];
	
	}
	if(strcmp(a,c)==0)
		printf("%d",j);


	
	return 0;


}