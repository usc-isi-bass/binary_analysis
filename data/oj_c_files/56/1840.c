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
int b,c,n,i;
char a[5];
gets(a);
b=strlen(a);

for(i=b-1;i>=0;i--)
{
	printf("%c",a[i]);
}
getchar();


}