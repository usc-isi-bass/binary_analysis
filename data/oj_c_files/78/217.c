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
{int z,q,s,l,a,b;

for(z=1;z<6;z++)
{
  for(s=1;s<6;s++)
  {
	  l=7-s;q=7-z;
         if((z+l>q+s)&&(z+s<q))
	 
		 {	a=s;b=z;}	}
}		 
  

l=6-a;q=6-b;
   printf("l %d\n",l*10);
printf("q %d\n",q*10);
printf("z %d\n",b*10);
printf("s %d",a*10);

	return 0;
}
