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
	int b=0,i;
	char c[100000];
	
	while(1){
		gets(c);
	for(i=0;i<100000;i++)
	{
		if(!c[i]) goto end;
		if(c[i]!=' '||b==0) putchar(c[i]);
		if(c[i]==' ') b=1;
		else b=0;
	}
	}
end:;
	printf("\n");
}