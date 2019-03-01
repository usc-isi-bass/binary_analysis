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
	int i,l,j=0,l1,l2,e=0;
	char a[256],b[256],c[256],d[256];
	scanf("%s",a);
    scanf("%s",b);
	scanf("%s",c);
	l=strlen(a);
	l1=strlen(b);
	l2=strlen(c);
	for(i=0;a[i]!='\0';i++){
		if(e==0){
		if(a[i]==b[j]){
			d[j]=a[i];
			j++;
		}else{
			if(j!=0&&e!=1){
				d[j]='\0';
				printf("%s",d);
			}
			j=0;
			printf("%c",a[i]);
		}
		if(j==l1&&e==0){
			printf("%s",c);
			i=i-l1+l2;
			e=1;
		}
		}else{
			printf("%c",a[i]);
		}
	}
	return 0;
}