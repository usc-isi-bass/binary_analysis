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
	char str1[100],str2[100];
	int n,i,j,k;
	gets(str1);
	n=strlen(str1);
	i=n-1;
	for(j=0;str1[i]!=32&&i>=0;i--)
	{str2[j]=str1[i];
	j++;}
	for(k=j-1;k>=0;k--)
		printf("%c",str2[k]);
	i--;
	while(i>=0)
	{for(j=0;str1[i]!=32&&i>=0;i--)
	{str2[j]=str1[i];
	j++;}
	printf(" ");
	for(k=j-1;k>=0;k--)
		printf("%c",str2[k]);
	i--;}
	
	
}
