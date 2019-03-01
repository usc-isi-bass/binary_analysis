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



nixu(int n)
{
int m;
m=n%10;
	printf("%d",m); 
	m=n/10;
if (m<1) ;
else m=nixu(m);
	return m;	
}

void main()
{
int n;

scanf("%d",&n);

nixu(n);

}