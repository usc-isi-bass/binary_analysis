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
	char a[100][100];
	int i=0,j;

			while(1)
	{
		scanf("%s",a[i]);
	    if ((a[i][0]>=65)&&(a[i][0]<=122))
			;
		else
			break;
		i++;
	
	}
	i--;
	for (j=i;j>=1;j--)
    printf("%s ",a[j]);
    printf("%s",a[0]);
    
	return 0;
}
