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

int main(){
	int i, k, j, m;
	char a[300], zm;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			m=i;
			for(j=i;a[j]!='\0';j++){
				if(a[j]!=' '){
					break;
				}
				 }
			for(k=j;a[k]!='\0';k++){
				zm=a[k];
				a[m+1]=zm;
				m++;
			}
			a[m+1]='\0';
		}
	}
	printf("%s", a);

	return 0;
}
	


