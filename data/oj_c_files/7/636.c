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
	char a[100];
	char b[100];
	char c[100];
	int i,j,m,k;
    int n=0;
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
    m=strlen(b);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[0]){
			n=0;
			for(j=0;b[j]!='\0';j++){
				if(a[i+j]==b[j])n++;
			}
			if(m==n)break;
		}
	}
if(m==n){
	for(k=0;k<i;k++){
		printf("%c",a[k]);
	}
    printf("%s",c);
	for(k=i+m;a[k]!='\0';k++){
		printf("%c",a[k]);
	}
}
	
	
	if(n!=m)
		printf("%s",a);
	return 0;
}
	


