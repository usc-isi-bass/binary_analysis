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
	unsigned int i;
	scanf("%d",&i);
	  do{
	  if(i%2==1&&i!=1)
	  i=3*i+1,printf("%d*3+1=%d\n",(i-1)/3,i);
	  else if(i%2==0)
	  i=i/2,printf("%d/2=%d\n",2*i,i);
	  else
	  ;
	  }while(i!=1);
	  printf("End");
}
