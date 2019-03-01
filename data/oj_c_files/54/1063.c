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

unsigned int apple(unsigned int N,unsigned int K);
int main()
{
    unsigned int m,n,k,J;
	scanf("%u %u",&n,&k);
	J=apple(n,k);
	m=J*n+k;
	printf("%u",m);
	return 0;
}
unsigned int apple(unsigned int N,unsigned int K)
{
    unsigned int i,j,l;
	for(i=1;;i++){
		j=i;
		for(l=1;l<N;l++){
		    if((j*N+K)%(N-1)==0)
				j=(j*N+K)/(N-1);
			else break;
		}
	if(l==N) break;
	}
	return j;
}