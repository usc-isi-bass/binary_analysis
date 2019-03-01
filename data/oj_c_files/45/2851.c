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
	char a[50],b[50];
	int i=0,j,w;
	scanf("%s%s", &a, &b);
    for(j=0;j<strlen(b);j++)
	{
	   if(a[i]==b[j]&&a[i+1]==b[j+1]&&i<strlen(a)-1)
		   i++;
	   w=j-strlen(a)+2;
       if(i==strlen(a)-1)
		break;	
	}
	printf("%d", w);
	return 0;
}

