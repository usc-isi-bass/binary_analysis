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
{char a[300][20];
int n,i;
scanf("%s",a[0]);
n=strlen(a[0]);
printf("%d",n);
for(i=1;i<300;i++){
scanf("%s",a[i]);
n=strlen(a[i]);
if(n==0)break;
else
printf(",%d",n);}



	return 0;
}

