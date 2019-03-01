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
	int a[8][8]={0};
	int h,l;
	int i,j;
	int i0,j0;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
		{
			for(j0=0;j0<l;j0++)
				if(a[i][j0]>a[i][j])goto loop;
			for(i0=0;i0<h;i0++)
				if(a[i0][j]<a[i][j])goto loop;
			goto loop2;
loop: ;
		}
if(1)printf("No");
else
loop2:printf("%d+%d",i,j);
}