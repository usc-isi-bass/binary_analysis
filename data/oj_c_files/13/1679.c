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

int main (){
	int s[101];
	int n,i,x;

	for (i=0;i<=100;i++) s[i]=0;
	cin>>n;
	for (i=0;i<n;i++)
	{cin>>x;
	if (s[x]==0) { if (i>0) cout<<' ';   cout<<x;s[x]=1;}
	}


	return 0;
}