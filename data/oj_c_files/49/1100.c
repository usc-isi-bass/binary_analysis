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
	int i,j,k,t;
	char str[500]={"1"};
	gets(str);
	for(k=1;k<strlen(str)-1;k++)
	    for(i=0;i<strlen(str)-k;i++){
			t=0;
			for(j=0;j<(k+1)/2;j++){
				if(str[i+j]!=str[i+k-j]){t=1;break;}
			}
			if(t==0){
				for(j=i;j<=i+k;j++)
					printf("%c",str[j]);
				printf("\n");
			}
		}
	return 0;
}