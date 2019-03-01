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
	int n,i,j;
	char word[50][30];
	int len[50];
	int a;
	scanf("%d",&n);
    for(i=0;i<n;i++) 
	{
		scanf("%s",word[i]);
		len[i]=strlen(word[i]);
	}

	for(i=0;i<n;i++)
	{
		if(word[i][len[i]-1]=='r'||word[i][len[i]-1]=='y') a=2;
		if(word[i][len[i]-1]=='g') a=3;
		for(j=0;j<len[i]-a-1;j++) printf("%c",word[i][j]);	
	    printf("%c\n",word[i][len[i]-a-1]);
	}

	return 0;
}
