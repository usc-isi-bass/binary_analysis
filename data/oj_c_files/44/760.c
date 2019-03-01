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

void reverse(int n)
{
 int i,b=0;
 if(n==0)
  printf("%d\n",n);
 else
 {
	 if(n<0)
	 printf("-");
	 n=abs(n);
	 if(n%10==0)
	 {
		 while(n%10==0)
		 {
			 n=n/10;
		 }
	 }
	 for(i=1;n!=0;i++)
	 {
		 b=b*10+n%10;
		 n=n/10;
	 }
	 printf("%d\n",b);
 }
}
int main()
{
	void reverse(int num);
	int n,j;
	for(j=1;j<=6;j++)
	{
		scanf("%d",&n);
		reverse(n);
	}
	return 0;
}