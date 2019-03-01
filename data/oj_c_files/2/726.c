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
	int s[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	struct book{
		int a;
        char name[27];
	};
	struct book list[999];
	char c;
	int n,i,j,b,maxnum=0,max;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%s",&list[i].a,list[i].name);
		for(j=0;list[i].name[j]!='\0';j++){
			c=list[i].name[j];
			b=c-'A';
			s[b]++;
		}         
	}
	for(i=0;i<26;i++){
		if(s[i]>maxnum){
		maxnum=s[i];
		max=i;
		}
	}
	printf("%c\n%d\n",'A'+max,maxnum);
	for(i=0;i<n;i++){
		for(j=0;list[i].name[j]!='\0';j++){
			if(list[i].name[j]-'A'==max){
				printf("%d\n",list[i].a);
			}
		}
	}

	return 0;
}
