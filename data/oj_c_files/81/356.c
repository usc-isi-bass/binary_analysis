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
{int a[5][5],m,n,i,j,t;	int f(int,int);
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)scanf("%d",&a[i][j]);
	scanf("%d%d",&m,&n);

	if(f(m,n)){for(i=0;i<5;i++){t=a[m][i];a[m][i]=a[n][i];a[n][i]=t;}
	for(i=0;i<5;i++)
	{for(j=0;j<4;j++)printf("%d ",a[i][j]);printf("%d\n",a[i][4]);}}
	else printf("error");}
int f(int x,int y)
{if(x>4||y>4)return 0;
	else return 1;}