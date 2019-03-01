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
	int n;
	int number[120];
	scanf("%d",&n);
	int i,maxpos;
	
	for (i=0;i<n;i++)
		scanf("%d",&number[i]);
	int max=-100000, sndmax=-100000;
	for (i=0;i<n;i++) {
		if (number[i]>max) {
			max=number[i];
			maxpos=i;
		}
	}
	for (i=0;i<n;i++) {
		if (i==maxpos)
			continue;
		if (number[i]>sndmax)
			sndmax=number[i];
	}
	printf("%d\n%d\n",max,sndmax);
	return 0;
}
