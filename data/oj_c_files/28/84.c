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

	char a[300][50];
	int b[300];
	int i=1,n,m;

	scanf("%s",a[0]);printf("%d",strlen(a[0]));

	while(scanf("%s",a[i])!=EOF){
		b[i]=strlen(a[i]);
		printf(",%d",b[i]);
		i++;}

}