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
	char a[1301]={0};
	int i,j,l,t=0;
	gets(a);
	l=(int)strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
			t=t+1;  
			if(t!=0&&a[i]==' ')
			{
			    printf("%d,",t);
		     	t=0;
			}
	}
	printf("%d",t);
         return 0;
}
