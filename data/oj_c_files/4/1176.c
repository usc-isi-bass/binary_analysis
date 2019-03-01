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
	int x,y,i=0,j=0,a[100][100];
	cin>>x>>y;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			cin>>a[i][j];
	for(i=0;i<y;i++)
		for(j=0;i-j>=0&&j<x;j++)
			cout<<a[j][i-j]<<endl;
	for(i=1;i<x;i++)
		for(j=0;i+j<x&&y-j-1>=0;j++)
			cout<<a[i+j][y-1-j]<<endl;
	return 0;
}

