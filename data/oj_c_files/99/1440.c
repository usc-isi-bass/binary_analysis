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
	int n,i,age[101], a=0, b=0, c=0, d=0;
	double af,bf,cf,df;
	scanf ("%d", &n);
	for (i=0;i<n; i++)
		scanf ("%d", &age[i]);

	for (i=0; i<n; i++){
		if (age[i]<=18) 
	      a++;
		else if (age[i]>=19&&age[i]<=35)
			b++;
		else if (age[i]>=36&&age[i]<=60)
			c++;
		else if (age[i]>=61)
			d++;}
	af=(double)100*a/n;
	bf=(double)100*b/n;
	cf=(double)100*c/n;
	df=(double)100*d/n;
	printf("1-18: %.2lf%%", af);
	printf ("\n19-35: %.2lf%%", bf);
	printf ("\n36-60: %.2lf%%", cf);
	printf ("\n60??: %.2lf%%", df);
	return 0;
}

