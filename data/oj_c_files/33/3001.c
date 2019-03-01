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

  int main(){
	  int n,i,k;
	  char a[256];
	  scanf("%d",&n);
	  for(i=0;i<n;i++){
	   scanf("%s",a);                                                                                       		  for(k=0;a[k]!='\0';k++){
			  if(a[k]=='A')
			  {
				  printf("T");
				  continue;
			  }
             if(a[k]=='G')
			 {
				  printf("C");
				  continue;
			  }
             if(a[k]=='C')
			 {
				  printf("G");
				  continue;
			  }

             if(a[k]=='T')
			 {
				  printf("A");
				  continue;
			  }
		  }
		  printf("\n");
	  }
	  return 0;
  }



	  