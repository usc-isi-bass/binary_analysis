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

int main(int argc, char* argv[])
{
	int n,k,he=0, shu[1000],i,j,c=0,d=0;
	scanf ("%d %d", &n, &k);
	for (i=0; i<n; i++)
		scanf ("%d", &shu[i]);
    for (i=0;i<n; i++){
		for (j=i+1;j<n;j++){
			he=shu[i]+shu[j];
			if (he==k)
				d++;
			c++;
			}
	}
	if (d==0)
		printf ("no");
	else 
		printf ("yes");
	return 0;
}

