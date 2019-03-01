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

struct book{
	int num;
	char s[27];
}shu[1000];
int main(){
	int n,i,l,j,max;
	char name;
	int letter[26]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%s",&shu[i].num,&shu[i].s);
		l=strlen(shu[i].s);
		for(j=0;j<l;j++){
			letter[(shu[i].s[j]-65)]++;
		}
	}
	for(max=letter[0],name=65,i=1;i<26;i++){
		if(letter[i]>max){
			max=letter[i];
			name=i+65;
		}
	}
	printf("%c\n%d\n",name,max);
	for(i=0;i<n;i++){
		l=strlen(shu[i].s);
		for(j=0;j<l;j++){
			if(shu[i].s[j]==name){
				printf("%d\n",shu[i].num);
			}
		}
	}
	return 0;
}