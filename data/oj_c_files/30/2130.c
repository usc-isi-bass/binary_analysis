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
	int n,s=0;
	scanf("%d",&n);
	while(n>0){
		if((n%7!=0)&&(n%10!=7)&&(n-n%10!=70)){
		s=s+n*n;
		}
		n=n-1;
	}
	printf("%d",s);
	return 0;
}
		