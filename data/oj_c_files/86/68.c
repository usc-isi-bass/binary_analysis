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



int main(int argc, char* argv[])
{
  int i,n,nn,k,t,j,c;  
  scanf("%d",&n);
  for (i=0;i<n;i++){
      scanf("%d",&nn);
	  if(nn==0){
		  printf("60\n");
	  }
	  else{
		  c=0;
		  t=0;

        for (j=1;j<=nn;j++){
           scanf("%d",&k);
		   if (k<60){
			   c=k;
			   t=k+j*3;
		   }
		}
		if (t>=63)
			c=c-(t-63);
		else if (t<60)
			c=c+(60-t);
		printf("%d\n",c);
	  }
  }
	return 0;
}
