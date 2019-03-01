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
char c[50][100];
int n,i,j,k,b;
int a[100];
scanf("%d",&n);
for(i=0,k=0;i<=n;i++,k++)
for(j=0;;j++)
{
	scanf("%c",&c[i][j]);
	if(c[i][j]=='\n')break;
	a[k]=j+1;
}
for(i=1;i<n;i++)
{
	b=a[i];
	if(c[i][b-2]=='e'&&c[i][b-1]=='r'||c[i][b-2]=='l'&&c[i][b-1]=='y')
		for(j=0;j<b-2;j++)printf("%c",c[i][j]);
	if(c[i][b-3]=='i'&&c[i][b-2]=='n'&&c[i][b-1]=='g')
		for(j=0;j<b-3;j++)printf("%c",c[i][j]);
	printf("\n");
}
b=a[i];
if(c[i][b-2]=='e'&&c[i][b-1]=='r'||c[i][b-2]=='l'&&c[i][b-1]=='y')
	for(j=0;j<b-2;j++)printf("%c",c[i][j]);
if(c[i][b-3]=='i'&&c[i][b-2]=='n'&&c[i][b-1]=='g')
	for(j=0;j<b-3;j++)printf("%c",c[i][j]);
}