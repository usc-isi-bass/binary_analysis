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

int f(int m, int n)

{

       if( m == 0 || n == 1) return 1;  

       if(m<n) return f(m ,m);

       return f(m,n-1) + f(m-n , n);

}
int main()
{   
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	int m,n,k;
	scanf("%d %d",&m,&n);
	k=f(m,n);
	printf("%d",k);
       printf("\n");
	}
	return 0;
}