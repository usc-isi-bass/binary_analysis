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
	int m=0,j=0,i=0,a[50]={0},max,min,maxi,mini;
	char s[50][20];
	while(1)
	{scanf("%s",&s[i]);
	if (getchar()!=' ') break;
	i=i+1;}
	
    for(j=0;j<=i;j++)
		a[j]=strlen(s[j]);

	m=i;
    max=min=a[0];maxi=0;mini=0;
	for(i=0;i<=m;i++)
	{
		if(a[i]>max){max=a[i];maxi=i;}
		if(a[i]<min){min=a[i];mini=i;}
	}
	printf("%s\n",s[maxi]);
		printf("%s",s[mini]);
		
}