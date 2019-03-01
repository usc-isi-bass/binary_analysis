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
	int i,n,j,k;
	char str[100];
	
	gets(str);

	n=strlen(str);

	for(i=1;i<=n;i++){
		for(k=1;k<101;k++){
			if(str[i-1]==' '&&str[i]==' '){
			    for(j=i;j<n;j++){
				str[j]=str[j+1];
				}
			}
		}
	}

	printf("%s\n",str);

	return 0;
}
