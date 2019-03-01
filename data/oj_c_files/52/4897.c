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
int n,m;
scanf("%d%d",&n,&m);
int a[100];
int i;
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int pos=n-m;
for(i=0;i<n-1;i++){
printf("%d ",a[(pos+i)%n]);}
printf("%d\n",a[(pos+i)%n]);
	return 0;
}

