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
	int i,l,k=0,c[100]={0};
	char a[100],b[100][100];
	gets(a);
	l=strlen(a);
	for(i=0;i<l-1;i++){
		if(a[i]!=' '){
			if(a[i+1]!=' '){
     			b[k][c[k]]=a[i];
				c[k]++;
			}
			else{
				b[k][c[k]]=a[i];
				b[k][c[k]+1]=' ';
				b[k][c[k]+2]='\0';
				k++;
			}
		}
	}
	b[k][c[k]]=a[l-1];
	b[k][c[k]+1]='\0';
	k++;
	for(i=0;i<k;i++)
		printf("%s",b[i]);
	return 0;
}
