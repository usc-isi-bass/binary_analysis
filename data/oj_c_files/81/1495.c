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

int f(int m,int n)
{
	if(m<=4&&n<=4) return 1;
	else return 0;
}
void main()
{
	int x,y,i,j,a[5][5],c;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)scanf("%d",&a[i][j]);
	scanf("%d%d",&x,&y);
	if(!f(x,y)) printf("error");
	else {
		for(i=0;i<5;i++){
			c=a[x][i];
			a[x][i]=a[y][i];
			a[y][i]=c;
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0)printf("%d",a[i][j]);
				else printf(" %d",a[i][j]);
			}
			printf("\n");}
	}
}


