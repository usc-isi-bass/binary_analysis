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
{
	int t,k,i,j,m;
	char c[500];
	for(i=0;;i++)
	{scanf("%c",&c[i]);
	if(c[i]=='\n') break;}
	t=i;
	for(k=2;k<=t;k++)
	{for(i=0;i<(t-k+1);i++)
	{for(j=i;j<=(i+k/2);j++)
	{if(c[j]!=c[2*i+k-1-j]) break;}
	if(j==(i+k/2+1)) 
	{for(m=i;m<i+k;m++)
	printf("%c",c[m]);
	if(m==i+k) printf("\n");}}}
	return 0;
}