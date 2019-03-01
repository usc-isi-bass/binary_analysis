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


int is_sushu(int k)
{
	int i;
	double u;
	if(k==2||k==3||k==5||k==7) return 1;
	for (i=3;i<=sqrt(k);i=i+2)
	{
		u=k%i;
		if(u==0) return 0;
	}
	if (u!=0) return 1;

}


int main(int argc, char* argv[])
{
    int n,h,k;
    scanf("%d",&n);
	for(h=6;h<=n;h=h+2)
	{  
       for(k=3;k<=n/2;k=k+2)
	   {
              if(is_sushu(k)+is_sushu(h-k)==2)
			  {
				  printf("%d=%d+%d\n",h,k,h-k);
				  break;
			  }
	   }


	}

	

	return 0;
}
