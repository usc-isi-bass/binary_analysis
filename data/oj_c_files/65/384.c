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

int a[200][2];
int main()
{
	int n,i,win,tie,lose;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	win=0;
	tie=0;
	lose=0;
	for(i=0;i<n;i++)
	{
		if(a[i][0]==0&&a[i][1]==1)
			win+=1;
		else if(a[i][0]==1&&a[i][1]==2)
			win+=1;
		else if(a[i][0]==2&&a[i][1]==0)
			win+=1;
		else if(a[i][0]==a[i][1])
			tie+=1;
	}
	lose=n-win-tie;
	if(win>lose)
		printf("A\n");
	else if(win<lose)
		printf("B\n");
	else
		printf("Tie\n");
		return 0;
}
