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
	int n,i=1,s[100],j;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&s[i]);
		i++;
	}
	j=n;
	while(j>1){
	     printf("%d ",s[j]);
		 j--;
	}
	printf("%d",s[1]);
	return 0;
}
