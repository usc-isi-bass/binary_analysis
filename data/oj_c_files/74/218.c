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


int revchk(int);
int main()
{
	int m,n,i,j,flag,tag=1,*t,*p,count=0;
	scanf("%d %d", &m, &n);
	t=(int*)calloc(n-m+1,sizeof(int));
	p=t;
	for(i=m;i<=n;i++){
		flag=1;
		for(j=2;j<(int)sqrt(i)+1;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag)
			if(revchk(i)){
				*(t++)=i;
				count++;
			}
	}
	t=p;
	if(!*t)
		printf("no");
	i=0;
	while(*(t)){
		printf("%d",*(t++) );
		if(i++<count-1)
			printf(",");
	}
	free(p);
	return 0;
}

int revchk(int test)
{
	int i,j,*n;
	int digit=(int)(log(test)/log(10))+1;
	n=(int*)calloc(digit,sizeof(int));
	*(n+digit-1)=(int)(test/pow(10,digit-1));						//??????????
	for(i=digit-2;i>=0;i--){
		test=test-pow(10,i+1) * (*(n+i+1) );
		*(n+i)=(int)(test / pow(10,i) );							//???????
	}
	for(i=0,j=digit;i<j;i++,j--){
		if( *(n+i)==*(n+j-1) )
			continue;
		return 0;
	}
	return 1;
}