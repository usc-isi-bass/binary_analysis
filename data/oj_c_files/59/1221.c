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
	int n,m,sum=0;
	cin>>n;
	char a[n+2][n+2],b[n+2][n+2];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)cin>>a[i][j];
	cin>>m;
	for(int i=1;i<m;i++){
		memcpy(b,a,sizeof(a));
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
				if(a[j][k]=='@'){
					if(a[j][k-1]=='.')b[j][k-1]='@';
					if(a[j][k+1]=='.')b[j][k+1]='@';
					if(a[j+1][k]=='.')b[j+1][k]='@';
					if(a[j-1][k]=='.')b[j-1][k]='@';
				}
		memcpy(a,b,sizeof(a));
	}
	for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				if(a[i][j]=='@')sum++;
	cout<<sum<<endl;
	return 0;
}