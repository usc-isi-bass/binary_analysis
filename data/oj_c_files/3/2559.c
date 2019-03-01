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

int a[1000];
main()
{
	int m,k,i,j,Flag=1;
	cin>>m>>k;
	for(i=0;i<m;i++)	cin>>a[i]; 
	for(i=0;i<m-1&&Flag;i++)
		for(j=i+1;j<m&&Flag;j++)
			if(a[i]+a[j]==k)
				{
					cout<<"yes";
					Flag=0;
					}
	if(Flag)	cout<<"no"; 
	} 