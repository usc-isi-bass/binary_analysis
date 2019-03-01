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
char c[50];
int i=0,flag=0;
gets(c);
while (i<=strlen(c))
{
if (c[i]>='0'&&c[i]<='9') 
	if (flag==0) {flag=1;printf("\n%c",c[i]);} else printf("%c",c[i]);
else flag=0;
i++;
}
}