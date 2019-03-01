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

int compare(const void* a,const void* b)
{
	return*(char*)b-*(char*)a;
}
void main()
{
	int i;
	char a[100],b[100];
	scanf("%s %s",a,b);
int la= strlen(a);
int lb= strlen(b);
	if(la!=lb)
	{
		printf("NO");
	}
	else
	{
        qsort(a,la,sizeof(char),compare);
	    qsort(b,lb,sizeof(char),compare);
	    for(i=0;i<strlen(a);i++)
		{
		    if(a[i]!=b[i])
		    	break;
		}
    	if(i==strlen(a))
	    	printf("YES");
    	else
		    printf("NO");
	}
}