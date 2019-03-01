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
	int j,n,i,book,max=0,pos,a[30][1000]={0};
	char s[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	  scanf("%d%s",&book,&s);
	  for (j=0;j<strlen(s);j++)
	  {
		  a[s[j]-'A'][0]++;
		  a[s[j]-'A'][a[s[j]-'A'][0]]=book;
	  }
	}
	for (i=0;i<26;i++)
		if (a[i][0]>max)
		{
			max=a[i][0];
			pos=i;
		}
	printf("%c\n%d\n",pos+'A',a[pos][0]);
	for (i=1;i<=a[pos][0];i++)
		printf("%d\n",a[pos][i]);
}