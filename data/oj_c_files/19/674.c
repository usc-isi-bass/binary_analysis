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

void main()
{
	char s[100],a[100],b[100],w[20][20];
	int n,t,i,j,m[100];
	gets(s);
	gets(a);
	gets(b);
	n=strlen(s);
	m[0]=-1;
	t=1;
	for(i=0;i<n;i++){
		if(s[i]==' '){
			m[t]=i;
			t+=1;
		}
	}
	m[t]=n;
	for(i=0;i<t;i++){
		for(j=m[i]+1;j<m[i+1];j++){
			w[i][j-m[i]-1]=s[j];
		}
		w[i][m[i+1]-m[i]-1]='\0';
	}
	for(i=0;i<t;i++){
		if(strcmp(w[i],a)==0){
			strcpy(w[i],b);
		}
	}
	printf("%s",w[0]);
	for(i=1;i<t;i++){
		printf(" %s",w[i]);
	}
}