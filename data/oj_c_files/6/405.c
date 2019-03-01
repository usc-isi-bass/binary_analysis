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

/*??????????  ??*/
int main()
{
	int t,i,j,k,a[100][100][100],b[100]={0},m[100],n[100];
	cin>>t;
	for(i=0;i<t;i++){
		cin>>m[i]>>n[i];
		for(j=0;j<m[i];j++){
			for(k=0;k<n[i];k++){
				cin>>a[i][j][k];}}
		for(j=0;j<m[i];j++)
			b[i]=b[i]+a[i][j][0]+a[i][j][n[i]-1];
		for(j=0;j<n[i];j++)
			b[i]=b[i]+a[i][0][j]+a[i][m[i]-1][j];
		b[i]=b[i]-a[i][0][0]-a[i][m[i]-1][0]-a[i][0][n[i]-1]-a[i][m[i]-1][n[i]-1];
		cout<<b[i]<<endl;}
		return 0;
}
