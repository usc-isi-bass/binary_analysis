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
	int n,i,j,card[1000],num[26]={0},max=0,k=0;
	char s[1000][27];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %s",&card[i],s[i]);
	for(i=0;i<n;i++)
		for(j=0;s[i][j]!='\0';j++)
			num[s[i][j]-'A']++;
	for(i=0;i<26;i++)
      if(num[i]>max)
	  {max=num[i];k=i;}
	printf("%c\n%d\n",k+'A',max);
	for(i=0;i<n;i++)
		for(j=0;s[i][j]!=0;j++)
			if(s[i][j]==k+'A')
			{printf("%d\n",card[i]);break;}
}
