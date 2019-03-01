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
	int i,a,sum=0;
	scanf("%d",&a);
	for(i=a;i>=0;i--){
		if(i%7!=0&&(i-7)%10!=0&&(int)(i/10)!=7)
	sum+=i*i;
	}
	printf("%d",sum);
	return 0;
}
