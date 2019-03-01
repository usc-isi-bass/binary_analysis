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
	int j,n,s=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%7==0){
			continue;
		}
		if(i%10==7){
			continue;
		}
		j=i;
		j=j/10;
		if(j%10==7){
			continue;
		}
		s+=i*i;

	}
	printf("%d",s);
	return 0;
}