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
	char str[100][100],d,string[100][100];
	int n,i,j,m,l;
	scanf("%d",&n);
	d=getchar();
	for(i=0;i<n;i++){scanf("%s",str[i]);d=getchar();scanf("%s",string[i]);}
	for(i=0;i<n;i++)
	{
	      m=strlen(str[i]);
		l=strlen(string[i]);
		for(j=1;j<=l;j++)
		str[i][m-j]=str[i][m-j]-string[i][l-j]+48;
		for(j=m-1;j>0;j--)
			if(str[i][j]<48)
			{
				str[i][j]+=10;
				str[i][j-1]--;
			}
		printf("%s\n",str[i]);
	}
}
			


