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



int main(int argc, char* argv[])
{
int n;
scanf("%d",&n);
int a[100];
int i;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=n-1;i>0;i--){
printf("%d ",a[i]);
}
printf("%d\n",a[i]);
	return 0;
}

