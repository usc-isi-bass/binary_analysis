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
	int i=0,j,begin,end;
	char a[10000],b[10];
	gets(b);
	gets(a);
	while(a[i]){
		begin=i;
		for(j=0;j<80&&a[i];j++)
			i++;
		if(a[i]==0){
			end=i-1;
			i--;
		}
		else{
			while(a[i]!=' ')
					i--;
			end=i-1;
		}
		while(begin<=end){
			printf("%c",a[begin]);
			begin++;
		}
		printf("\n");
		i++;
	}
	return 0;
}