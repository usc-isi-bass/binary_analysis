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
	int i,k,n,j,a,b,s[100]={0},f[100][100];
	int *p=NULL;
	cin >> n;
	for ( i=0;i<n;i++ )
		{
			cin >> a >> b;
			for ( j=0;j<a;j++ )
				for ( k=0;k<b;k++ )
					cin >> f[j][k];
			for ( j=0;j<a;j++ )
				{
					p=f[j];
					s[i] += *p;
					p=f[j]+b-1;
					s[i] += *p;
				}
			for ( k=1;k<b-1;k++ )
				{
					p=f[0]+k;
					s[i] += *p;
					p=f[a-1]+k;
					s[i] += *p;
				}
		}
	for ( i=0;i<n;i++ )
		cout << s[i] << endl;

	return 0;
}
