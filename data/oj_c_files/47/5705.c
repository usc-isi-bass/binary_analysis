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
int i,n;
int num [100];
scanf("%d",&n);
i=0;
while(i<n){
	scanf("%d",&num [i]);
	i++;
}
i=n-1;
while(i>0){
	printf("%d ",num [i]);
	i--;
}
printf("%d",num [0]);
return 0;
}
