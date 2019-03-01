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
	int i,j,a=0;
	char c[50]={'\0'};
	gets(c);
	for(i=0;i<strlen(c);i++){
		if(c[i]!='\0'){
			if(c[i]>47&&c[i]<58){
				for(j=i;j<=strlen(c);j++){
					if(c[j]<48||c[j]>57){
						printf("\n");
						i=j;
						break;
					}
					printf("%c",c[j]);
				}
			}
		}
	}
	return 0;
}