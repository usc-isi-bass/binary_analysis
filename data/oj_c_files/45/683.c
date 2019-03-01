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
	int i,r=1;
	char a[60],b[60];
	scanf("%s%s",a,b);
	for(i=0;r==1;i++)
	if(a[0]==b[i]){printf("%d\n",i);r=0;}
}