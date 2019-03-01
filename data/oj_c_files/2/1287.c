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
	int No;
	char author[27];
}book[999];
int letter[26]={0};

main()
{
	int letter[26]={0};
	int count=0;
	int m,n,s;
	scanf("%d",&m); 
	int i,j,max;
	for(i=0;i<m;i++){
		scanf("%d%s",&book[i].No,&book[i].author);
	}
	for(i=0;i<m;i++){
		for(j=0;j<strlen(book[i].author);j++){
			n=book[i].author[j]-65;
			letter[n]++;
		}
	}
	max=letter[0];
	for(n=0;n<26;n++){
		if(letter[n]>max){
			max=letter[n];
		}
	}
	for(n=0;n<26;n++){
		if(max==letter[n]){
			s=n;
			printf("%c\n%d\n",n+65,max);
			break;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<strlen(book[i].author);j++){
			if(s==book[i].author[j]-65){
				printf("%d\n",book[i].No);
			}
		}
	}
}