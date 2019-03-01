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
	char num[6];
	int i,n,nnum[6],p=0;
	scanf("%s",num);
	n=strlen(num);
	
	for(i=n-1;i>=0;i--){
		nnum[i]=num[i]-48;
		printf("%d",nnum[i]);
	}
	
	return 0;
}

