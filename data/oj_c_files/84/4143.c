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
int num,n;
int max,sec;

  scanf("%d",&n);
  for(int i=0 ;i<n;i++)
  {
	 scanf("%d",&num);

	 if(i==0)
	 {
		 max=num;
	 }
		 
	 else if(i!=0)
	 {

		 if(num>max)
		 {
			 sec=max;
			 max=num;
		 }
		 else if(num>sec && num<max)
		 {
			 sec=num;
		 }
	 }
		
	 
   
   
  }
	printf("%d\n%d\n",max,sec);
	return 0;
}
