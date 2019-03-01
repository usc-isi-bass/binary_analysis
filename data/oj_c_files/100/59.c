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

void main()
{
	char a[300]={0},b[26]={0};
	int c[26]={0};
	int i,j;
	gets(a);
	i=0;
	while(a[i]!=0)
	{
		if(islower(a[i])) c[(a[i]-97)]++;
		i++;
	}
	j=1;
	for(i=0;i<26;i++)
	{
		if(c[i]!=0) {j=0;printf("%c=%d\n",(97+i),c[i]);} 
	}
	if(j) printf("No\n");
}