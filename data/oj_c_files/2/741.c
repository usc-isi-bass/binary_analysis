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


int main(int argc, char* argv[])
{
	int n,i,j,m,b=0,max;
	int let[26]={0};
	char a;
	struct student{
		int num;
		char name[26];
	}book[999];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%s",&book[i].num,&book[i].name);
	}
	for(i=0;i<n;i++){
		m=strlen(book[i].name);
		for(j=0;j<m;j++){
			let[book[i].name[j]-'A']++;
		}
	}
	max=let[0];
	for(i=0;i<25;i++){
		if(let[i]>max){
			max=let[i];
			b=i;
		}
	}
	a=b+'A';
	printf("%c\n%d\n",a,max);
	for(i=0;i<n;i++){
		m=strlen(book[i].name);
		for(j=0;j<m;j++){
			if(book[i].name[j]==a){
				printf("%d\n",book[i].num);
			}
		}
	}
	return 0;
}
