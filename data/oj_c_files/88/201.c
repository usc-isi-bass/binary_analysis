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

main()
{
	char *a,*p;
	a=(char *)malloc(30*sizeof(char));
	gets(a);
	for(p=a;*p!='\0';p++)
		if(*p<='9'&&*p>='0') printf("%c",*p);
		else if(*(p-1)<='9'&&*(p-1)>='0') printf("\n");
}
