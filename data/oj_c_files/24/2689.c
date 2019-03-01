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

int main(){
	char max[50],min[50],a[50];
	int n,i;
	scanf("%d",&n);
	scanf("%s",max);
	strcpy(min,max);
	for(i=2;i<=n;i++){
		scanf("%s",a);
		if(strlen(a)>strlen(max)) strcpy(max,a);
		if(strlen(a)<strlen(min)) strcpy(min,a);
	}
	printf("%s\n",max);
	printf("%s\n",min);
	return 0;
}