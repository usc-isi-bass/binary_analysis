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
	char a[50],b[50];
	int i,j,k=0,l=0;
	scanf("%s %s",a,b);
	for(i=0;i<strlen(a);i++){
		for(j=l;j<strlen(b);j++)
			if(a[i]==b[j]) {
				k++;
				l=j+1;
				break;}
	}
	if(k==strlen(a))
		printf("%d",j+1-k);
	return 0;
}