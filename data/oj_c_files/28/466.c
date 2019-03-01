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
	char c[3000];
	int i,k=0,b=0;
	gets(c);
	for(i=0;i<=strlen(c);i++) 
	{
		if (i==strlen(c)) {printf("%d",k);break;}
		else if(c[i]!=' ') {k++;b=1;}
		else if(b==1) {printf("%d,",k);k=0;b=0;}
	}
}