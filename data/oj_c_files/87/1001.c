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
	int a,b,c,d,e,f,g[100];
	int i=0;
	while(i>=0){
	  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	  scanf("\n");
	  g[i]=3600*(11-a+d)+60*(59-b+e)+60-c+f;
	  if(!(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)){
	    printf("%d\n",g[i]);
	    i++;
	  }
	  else {
		  break;
	  }
	}
	  return 0;
}