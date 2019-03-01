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
	int a[1000];
	int b,c,d,f,m;
	m=0;//?????
	cin>>b>>c;
	for(d=b;d>0;d=d-1)cin>>a[d];
	for(d=1;d<=b;d++)
	{
		for(f=1;f<=b;f++)
		{
			if(   (a[f]+a[d])==c   &&   f!=d  )m=1;
		}

	}
	if(m==0)cout<<"no";
	else cout<<"yes";
	return 0;
}