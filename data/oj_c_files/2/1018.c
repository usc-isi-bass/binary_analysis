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


struct BOOK
{
	int num;
	char author[26];
};

char maxbook(int a[])
{
	int i,j,bookmax=0;
	for(i=0;i<26;i++){
		if(bookmax<a[i]){
			bookmax=a[i];
			j=i;
		}
	}
	printf("%c\n%d\n",'A'+j,bookmax);
	return 'A'+j;
}

int contain(char author[],char max)
{
	char *c=author;
	while(*c){
		if(*c==max) return 1;
		c++;
	}
	return 0;
}

void main()
{
	struct BOOK book[1000];
	int m,i,j;
	char c,max;
	int AtoZ[26]={0};

	scanf("%d",&m);

	for(i=0;i<m;i++){
		scanf("%d",&book[i].num);
		getchar();
		j=0;
		while((c=getchar())!='\n'){
			book[i].author[j]=c;
			AtoZ[c-'A']++;
			j++;			
		}
		book[i].author[j]='\0';
	}
	max=maxbook(AtoZ);

	for(i=0;i<m;i++){
		if(contain(book[i].author,max))
			printf("%d\n",book[i].num);
	}
}
