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
	char s[10000],q[2]=" ";
	int i,e=0,j=0,a[300],k=0;
	gets(s);
	strcat(s,q);
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=' '){
			j++;
			e=0;
		}else{
			e++;
			if(e==1){
				a[k]=j;
				k++;
			}
			j=0;
		}
	}
	for(i=0;i<k-1;i++){
        printf("%d,",a[i]);
	}
	printf("%d",a[k-1]);
	return 0;
}