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


int mon[14]={31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int we1,i;

	int mon[14]={31,28,31,30,31,30,31,31,30,31,30,31};

    scanf("%d",&we1);

    int judge(int x,int y);

	for(i=1;i<13;i++){
		if(judge(we1,i)==1)
			printf("%d\n",i);
	}

	return 0;
}

int judge(int x,int y){
	int sum=0,i;

    for(i=0;i<y-1;i++){
		sum+=mon[i];
	}

	sum+=13;

	if((sum+x-1)%7==5)
		return 1;
	else
		return 0;
}

