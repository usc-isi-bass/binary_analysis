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
{int i=2;
for(i=2;i<=sqrt(n);i++)
if(n%i==0) break;
if(i>sqrt(n)) return 1;
else return 0;
}
void main()
{
long int m;
scanf("%d",&m);
int j=6,i=2;
for(j=6;j<=m;j=j+2)
{
	for(i=2;i<=j/2;i++)
	{
		if(sushu(i)==1&&sushu(j-i)==1)
	break;
	}
	printf("%d=%d+%d",j,i,j-i);
	printf("\n");



}

}