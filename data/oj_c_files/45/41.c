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
	char a[100],b[100],c[100];
	scanf("%s %s",b,a);
	int i,j,k=0;
	int flag=0;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i;j<strlen(b)+i;j++)
		{
			c[k++]=a[j];
		}
		c[k]=0;
		if(strcmp(b,c)==0)
		{
			printf("%d",i);
			flag=1;
                           break;
		}
		k=0;
	} 
	if(flag==0)printf("No");
	return 0;
}
