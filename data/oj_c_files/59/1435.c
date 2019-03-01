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

int main(){
char a[101][101];
int i,j,n,ans,m;
cin>>n;
for (i=1;i<=n;i++)
	for (j=1;j<=n;j++) cin>>a[i][j];
cin>>m;
while (m>1)
{for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
		if (a[i][j]=='@')
		{if ((i>1)&&(a[i-1][j]=='.')) a[i-1][j]='1';
		if ((i<n)&&(a[i+1][j]=='.')) a[i+1][j]='1';
		if ((j>1)&&(a[i][j-1]=='.')) a[i][j-1]='1';
		if ((j<n)&&(a[i][j+1]=='.')) a[i][j+1]='1';}
for (i=1;i<=n;i++)
	for (j=1;j<=n;j++) if (a[i][j]=='1') a[i][j]='@';
	m--;
}
ans=0;
for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
		if (a[i][j]=='@') ans++;
cout<<ans;
		 return 0;
}