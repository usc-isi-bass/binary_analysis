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

void main()
{ int i,j,n;
	int a,b,c,d;
	double e,f;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	e=(double)b/a;
	for(i=1;i<n;i++){
	scanf("%d%d",&c,&d);
	f=(double)d/c;	
	if(f-e>0.05) printf("better\n");
	else {
		if(e-f>0.05) printf("worse\n");
		else printf("same\n");}}
    
}