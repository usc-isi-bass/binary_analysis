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

int a[10],b[10],la=0,lb=0;
int main(){
	int i,j,x;
	scanf("%d",&x);
	while (x>0) {a[la++]=x%2;x/=2;}
	scanf("%d",&x);
	while (x>0) {b[lb++]=x%2;x/=2;}
	for (i=la-1,j=lb-1,x=0;i>=0&&j>=0&&a[i]==b[j];i--,j--) x=x*2+a[i];
	printf("%d",x);
	return 0;
}
