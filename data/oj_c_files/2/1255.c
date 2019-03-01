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

struct book
{
	char num[4]; 
	char author[27];
}book[100];
int main()
{  
	int n,i,k,sz[26],t,m,e;
	scanf("%d",&n);
	m=0;
	for(i=0;i<26;i++){
		sz[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%s%s",book[i].num,book[i].author);
		t=strlen(book[i].author);
		for(k=0;k<t;k++){
				sz[book[i].author[k]-'A']++;
		}
	}for(i=0;i<26;i++){
		if(sz[i]>m){
			m=sz[i];
			e=i;
		}
	}printf("%c\n%d\n",e+'A',m);
	for(i=0;i<n;i++){
		t=strlen(book[i].author);
		for(k=0;k<t;k++){
			if(book[i].author[k]==e+'A'){
				printf("%s\n",book[i].num);
			}
		}
	}return 0;
}