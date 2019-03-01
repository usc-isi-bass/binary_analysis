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
	int l,n,m,sum=0,i,j,k,a[101][101];
	cin>>l;
	for(i=1;i<=l;i++){
		cin>>m>>n;
		sum=0;
		for(j=1;j<=m;j++)
			for(k=1;k<=n;k++)
				cin>>a[j][k];
		if(m!=1&&n!=1){
		for(k=1;k<=n;k++)
				sum+=a[1][k];
		for(k=1;k<=n;k++)
				sum+=a[m][k];
		for(k=2;k<m;k++)
				sum+=a[k][1];
		for(k=2;k<m;k++)
				sum+=a[k][n];
		cout<<sum<<endl;}
		else{
			for(j=1;j<=m;j++)
				for(k=1;k<=n;k++)
					sum+=a[j][k];
			cout<<sum<<endl;
		}
	}
	return 0;
}


