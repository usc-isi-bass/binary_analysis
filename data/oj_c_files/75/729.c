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

int n,k,i,j,tot=0,cnt,Max=0;
char c;
int X[2000],Y[2000];
int  main()
{
		cnt=0;
		while (scanf("%d",&X[cnt++]) && (c=getchar()) && c!='\n');
		cnt=0;
		while (scanf("%d",&Y[cnt++]) && (c=getchar()) && c!='\n');
		for (i = 0;i < 1000;++i)
		{
			tot=0;
			for (j = 0;j<cnt;++j)
			if (X[j]<=i && Y[j]>i) tot++;
			if (tot>Max) Max = tot;
		}
		printf("%d %d\n",cnt,Max);

}
