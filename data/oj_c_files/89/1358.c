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


int k[10000][10000];
int n,a,b,c,i,j,ans;

int main()
{
	scanf("%d",&n);
	while (1)
	{
		scanf("%d%d",&a,&b);
		if (a == 0 && b == 0) break;
		else
			k[a][b] = 1;
	}
	c = 0;
	for (i = 1;i < n;i ++)
		if (k[c][i] == 1) c = i;
	for (i = 0;i < n;i ++)
      if (i != c )
		  if (k[i][c] == 1 && k[c][i] == 0) continue;
		  else break;
    if (i == n) printf("%d\n",c);else printf("NOT FOUND\n");
}