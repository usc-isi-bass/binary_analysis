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
	char a[51],b[51];
	int i,j=0,flag=0,p,l1,l2,k;
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l2;i++)
	{
		if(b[i]==a[0])
		{   k=i;
			while(a[j]!='\0')
			{
				if(b[k++]!=a[j])
				{
					flag=1;break;
				}
				j++;
			}
			if(flag==0)
			{
				p=i;break;
			}
		}
	}

	printf("%d",p);
}
		