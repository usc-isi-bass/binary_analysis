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
	int n,m,i,j,a[100];
	int * shu;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
    shu=a+n-m;
	i=0;
	do{
		cout<<*shu<<" ";
		shu++;
		i++;
		if(shu>a+n-1) shu=a;
		
	}while(i<n-1);
	cout<<*shu;
	return 0;
}