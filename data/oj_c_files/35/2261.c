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
	int i,j,t,r,c,s=0,max,flag,a[9][9];
	scanf("%d,%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++){
		for(j=0,max=0;j<c;j++)
			if(a[i][j]>a[i][max])
				max=j;
		for(t=0,flag=0;t<r;t++)
			if(a[t][max]>=a[i][max])
				flag++;
		if(flag==r){
			s=1;
			break;
			}
	}
	if(s)
		printf("%d+%d",i,max);
	else
		printf("No");
}