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
	int j,i,m[1000],n[1000];
	char s[1000];
	char *ps=s;
	gets(s);
	int l=strlen(s);
	for(i=0,j=1;*ps!='\0';ps++,i++){
		if(*ps==' '){
			m[j]=i;
			j++;
		}
	}
    m[0]=-1;
	m[j]=l;
	for(i=0;i<j-1;i++){
		n[i]=m[i+1]-m[i]-1;
		if(n[i]==0){
			continue;
		}
		printf("%d,",n[i]);
	}
	n[i]=m[i+1]-m[i]-1;
	printf("%d",n[i]);
	return 0;
}