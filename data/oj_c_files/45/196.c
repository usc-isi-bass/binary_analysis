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
	char a[50],b[50];
	scanf("%s",a);
	scanf("%s",b);
	int i,k,t=1;
	for(k=0;k<=(int)strlen(b);k++)
	{
		for(i=0;i<(int)strlen(a);i++)
           if(a[i]==b[k+i])
				t=1;
			else
			{
				t=0;
				break;
			}
			if(t==1)
			break;
	}
	if(t==0)
		printf("0");
	else
		printf("%d",k);
    printf("\n");
}