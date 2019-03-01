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
	int m,n,i,j;
	cin>>m>>n;
	const int M=m,N=n;
	int mount[M][N];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)cin>>mount[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			if(i>0)
				if(mount[i-1][j]>mount[i][j])continue;
			if(j>0)
				if(mount[i][j-1]>mount[i][j])continue;
			if(i<m-1)
				if(mount[i+1][j]>mount[i][j])continue;
			if(j<n-1)
				if(mount[i][j+1]>mount[i][j])continue;
			cout<<i<<' '<<j<<endl;
		}
	return 0;
}
