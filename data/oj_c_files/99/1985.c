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

main()
{
int i,n,m,j,k;
int A[100];
int P1=0,P2=0,P3=0,P4=0;

scanf("%d",&n);

for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);
}

for(i=0;i<n;i++)
{
	if(A[i]<=18) P1++;
	if((A[i]>=19)&&(A[i]<=35)) P2++;
	if((A[i]>=36)&&(A[i]<=60)) P3++;
	if(A[i]>=61) P4++;
}

printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",
(double)100*P1/n,(double)100*P2/n,(double)100*P3/n,(double)100*P4/n);

return 0;
}