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

// ???.cpp : ??????????????
//


int yuesefu(int key,int n);
int main()
{
	int monkeys[300];
	int tmp[300];
	for(int i=0;i<300;i++)
		tmp[i]=monkeys[i]=i;
	int key,num;
	int i=0;
	while(1)
	{
	scanf("%d %d",&num,&key);
	if(key==0)
		break;
    int final=yuesefu(key,num);	
	if(i++)
	    printf("\n");
	printf("%d",final);

	}
	return 0;
}

int yuesefu(int m,int n)
{
	int leave=1;
	for (int i=2;i<=n;i++)
	{
		int j=((m-1)%i+leave-1)%(i-1)+1;
		if (j>=(m-1) % i+1)
          leave=j+1 ;
		else 
		leave=j;
	}
	return leave;

}
