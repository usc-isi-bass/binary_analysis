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
	int i,j,n;
	char a[300],b[300];
	gets(a);
	j=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j=j+1;}
		else{
			b[j]=a[i];
			j=j+1;
			while(a[i+1]==' ')
			{
				i=i+1;
			}
		}
	}
	b[j]='\0';
	puts(b);
return 0;
	}