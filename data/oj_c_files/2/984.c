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


struct bo{
	char id[10];
	char au[100];
};

int main(){
	int n,i,j,max;
	char maxa;
	struct bo *book;
	int auth[26];
	memset(auth,0,sizeof(int)*26);
	scanf("%d",&n);
	book=(struct bo *)malloc(sizeof(struct bo)*n);
	for(i=0;i<n;i++){
		scanf("%s%s",book[i].id,book[i].au);
		for(j=0;book[i].au[j];j++){
			auth[book[i].au[j]-'A']++;
		}	
	}
	max=0;
	for(i=0;i<26;i++)
	{
		if(max<auth[i]) {
			max=auth[i];
			maxa=i+'A';
		}
	}
	printf("%c\n",maxa);
	printf("%d\n",max);
	for(i=0;i<n;i++){
		if(strchr(book[i].au,maxa))
			printf("%s\n",book[i].id);
	}

	return 0;
}