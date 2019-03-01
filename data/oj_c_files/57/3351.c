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
	   int n,i,j;
	   char zf[60][40];
	   scanf("%d",&n);
	   for(i=0;i<n;i++){
		   scanf("%s",zf[i]);
		   j=strlen(zf[i])-1;
			   if(((zf[i][j-1]=='e')&&(zf[i][j]=='r'))||((zf[i][j-1]=='l')&&(zf[i][j]=='y'))){
                   zf[i][j-1]='\0';
			   }
			   else{
				   zf[i][j-2]='\0';
			   }
	   }
	   for(i=0;i<n;i++){
		   printf("%s\n",zf[i]);
	   }
	return 0;
}