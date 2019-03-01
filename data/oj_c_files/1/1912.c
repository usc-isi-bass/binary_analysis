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

int num=0;
void count(int m,int j)
{
	int i;
	if(m==1) num++;
	for(i=j;i<=m;i++)
	{
		if(m%i==0) {count(m/i,i);}
		else continue;}
}
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int m;
		cin>>m;
		num=0;
		count(m,2);
		cout<<num<<endl;
	}
	return 0;
}
