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

int main()
{
	int n,c[500]={0},max=0,i,j;
scanf("%d\n",&n);
char a[510];
gets(a);
int la=strlen(a);
char b[500][5];
for(i=0;i<=la-n;i++)
{
	for(j=0;j<n;j++)
	{
		b[i][j]=a[i+j];
	}
	b[i][n]='\0';
}
for(i=0;i<=la-n;i++)
{
for(j=i;j<=la-n;j++)
{
	if(strcmp(b[i],b[j])==0)
		c[i]++;
}
if(c[i]>max)
max=c[i];
}
if(max==1)
printf("NO");
else
{
printf("%d\n",max);
for(i=0;i<=la-n;i++)
{
	if(c[i]==max)
		puts(b[i]);

}

}
return 0;
}
