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



int main()
{	int f(int M,int N);
	int i,j,k;
	int zu;
	int m,n;
	scanf("%d",&zu);
	for(k=0;k<zu;k++)
	{
	scanf("%d %d",&m,&n);//M??? N???
	printf("%d\n",f(m,n));
	}

}


int f(int M,int N)
{
if((N==1)||(M==1))
	return 1;
else
	if(M-N>0)
	return (f(M,N-1)+f(M-N,N));
	else
		if(M==N)
			return (f(M,N-1)+1);
		else
		return f(M,N-1);
	
}