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
	int a,b=3,c=5,d=7;
	scanf("%d",&a);
    if(a%b==0&&a%c==0&&a%d==0)
		printf("%d %d %d",b,c,d);
	else if(a%b==0&&a%c==0&&a%d!=0)
        printf("%d %d",b,c);
	else if(a%b==0&&a%d==0&&a%c!=0)
        printf("%d %d",b,d);
	else if(a%c==0&&a%d==0&&a%b!=0)
        printf("%d %d",c,d);
	else if(a%b==0&&a%c!=0&&a%d!=0)
		printf("%d",b);
    else if(a%c==0&&a%d!=0&&a%b!=0)
		printf("%d",c);
	else if(a%d==0&&a%c!=0&&a%b!=0)
		printf("%d",d);
	else 
	printf("n");
	return 0;
}

