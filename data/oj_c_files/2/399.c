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
	int num;
	char name[27];
}book[1000];

int main(int argc, char* argv[])
{
	int m,i,j,a[27],len,max=0,number;
	char p;
	for(i=1;i<=26;i++){
		a[i]=0;
	}
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%d %s",&book[i].num,&book[i].name);
		len=strlen(book[i].name);
		for(j=0;j<=len-1;j++){
			p=book[i].name[j];
			a[p-64]+=1;
		}
	}
	for(i=1;i<=26;i++){
		if(a[i]>max){
			max=a[i];
			number=i;
		}
	}
	printf("%c\n%d\n",number+64,a[number]);
	for(i=1;i<=m;i++){
		len=strlen(book[i].name);
		for(j=0;j<=len-1;j++){
			if(book[i].name[j]==number+64){
				printf("%d\n",book[i].num);
			}
		}
	}

	return 0;
}

