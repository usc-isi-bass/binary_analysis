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

int sushu(int n)
{
	int i;

	
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	
	}
	return 1;

}
int main()
{
	int m,i;
	scanf("%d",&m);
	for(i=2;i<m;i++)
	{
		if(sushu(i)&&sushu(m-i))
		{
			if(i<=m-i)
			printf("%d %d\n",i,m-i);
			else continue;
		}
	
	}
	return 0;
}



	



