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
	int i,j=0,a;
	char n[5],w[6];
	scanf("%s",n);
	a=(int)strlen(n);
	for(i=a-1;i>=0;i--){
	
			w[j]=n[i];
			j++;
	}
	w[j]=0;
	
    printf("%s",w);
	return 0;
}