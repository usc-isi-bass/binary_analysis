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
   int a[5][5],p,i,b[5];
   for(i=0;i<5;i++){
      for(p=0;p<5;p++){
      scanf("%d",&a[i][p]);
   }
}
   for(i=0;i<5;i++){
	   for(p=0;p<5;p++){
		   if(a[i][p]>=a[i][0]&&a[i][p]>=a[i][1]&&a[i][p]>=a[i][2]&&a[i][p]>=a[i][3]&&a[i][p]>=a[i][4]){
			   b[i]=p;
		   }
	   }
   }
   if((a[0][b[0]]>=a[1][b[0]]||a[0][b[0]]>=a[2][b[0]]||a[0][b[0]]>=a[3][b[0]]||a[0][b[0]]>=a[4][b[0]])&&
	   (a[1][b[1]]>=a[0][b[1]]||a[1][b[1]]>=a[2][b[1]]||a[1][b[1]]>=a[3][b[1]]||a[1][b[1]]>=a[4][b[1]])&&
	   (a[2][b[2]]>=a[0][b[2]]||a[2][b[2]]>=a[1][b[2]]||a[2][b[2]]>=a[3][b[2]]||a[2][b[2]]>=a[4][b[2]])&&
	   (a[3][b[3]]>=a[0][b[3]]||a[3][b[3]]>=a[1][b[3]]||a[3][b[3]]>=a[2][b[3]]||a[3][b[3]]>=a[4][b[3]])&&
	   (a[4][b[4]]>=a[0][b[4]]||a[4][b[4]]>=a[1][b[4]]||a[4][b[4]]>=a[2][b[4]]||a[4][b[4]]>=a[3][b[4]])){
      printf("not found\n");
	   return 0;
   }
   for(i=0;i<5;i++){
      for(p=0;p<5;p++){
      if(a[i][p]>=a[i][0]&&a[i][p]>=a[i][1]&&a[i][p]>=a[i][2]&&a[i][p]>=a[i][3]&&a[i][p]>=a[i][4]){
    if(a[i][p]<=a[0][p]&&a[i][p]<=a[1][p]&&a[i][p]<=a[2][p]&&a[i][p]<=a[3][p]&&a[i][p]<=a[4][p]){
     printf("%d %d %d\n",i+1,p+1,a[i][p]);
    }
   }       
   }
}
return 0;
}