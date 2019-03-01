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

int a[201][201];
int main()
{
	int n,m;
	cin>>n>>m;
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>*(*(a+i)+j);
	for(int s=0;s<n+m-1;s++)
	for(int i=0;i<=s;i++)
	if(a[i][s-i]!=0)cout<<a[i][s-i]<<endl;
} 