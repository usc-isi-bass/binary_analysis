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
	char a[100];
	gets(a);
	char st[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int stn[52]={0};
	int i,j,lenth,flag=0;
	lenth=strlen(a);
	for(i=0;i<lenth;i++)	for(j=0;j<52;j++)	if(a[i]==st[j])	{stn[j]++;	flag=1;	break;}
	for(j=0;j<52;j++)	if(stn[j]!=0)	printf("%c=%d\n",st[j],stn[j]);
	if(flag==0)	printf("No\n");
	return 0;
}
