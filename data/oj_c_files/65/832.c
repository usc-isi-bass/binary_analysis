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
	int n,i,j,k;
	int A,B,C;
	int a[50],b[50];
	scanf("%d",&n);
    A=0;
    B=0;
	for(i=0;i<n;i++){
	   scanf("%d %d",&a[i],&b[i]);
	if(a[i]==0&&b[i]==1)
		A++;
	else if(a[i]==1&&b[i]==2)
		A++;
    else if(a[i]==2&&b[i]==0)
		A++;
    else if(a[i]==b[i])
       C++;
	else
		B++;
	}
	if(A>B)
		printf("A");
	if(A==B)
		printf("Tie");
	if(A<B)
		printf("B");
	return 0;
}
