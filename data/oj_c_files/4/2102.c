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
	int *a[101][101],lie,hang,i,j,h,l;
	scanf("%d %d",&hang,&lie);
	for	(i=1;i<=hang;i++)
		for (j=1;j<=lie;j++)
			a[i][j]=(int *)malloc(sizeof(int));

	for (i=1;i<=hang;i++)
		for (j=1;j<=lie;j++)
			scanf("%d",a[i][j]);
	for (j=1;j<=lie;j++)
	{
		h=1;
		l=j;
		while (l>=1 && h<=hang)
		{
			printf("%d\n",*a[h][l]);
			h++;
			l--;
		}
	}
	for (i=2;i<=hang;i++)
	{
		l=lie;
		h=i;
		while(l>=1 && h<=hang)
		{
			printf("%d\n",*a[h][l]);
			h++;
			l--;
		}
	}
}