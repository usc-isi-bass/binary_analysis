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
	int i;
	int a[1001]={0},b[1001]={0};
	char s1[1001];
	char s2[1001];
	gets(s1);
	gets(s2);
	for(i=0;i<strlen(s1);i++)
	a[i]=s1[strlen(s1)-i-1]-'0';
	for(i=0;i<strlen(s2);i++)
	b[i]=s2[strlen(s2)-i-1]-'0';
	for(i=0;i<=999;i++)
	{
		a[i]+=b[i];
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	i=1000;
	while(i>=0&&a[i]==0)i--;
	if(i==-1)
	cout<<"0";
	else
	while(i>=0)
	{cout<<a[i];i--;}
	return 0;
}
