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
   int n,i,j,len[1111];
   char zfc[1111][256];
   scanf("%d", &n);
   for(i=0;i<n;i++)
   {
	   
	   scanf("%s", zfc[i]);
	   len[i]=strlen(zfc[i]);
		
   }
   for(i=0;i<n;i++)
   {
	   for(j=0;j<len[i];j++)
	   {
	   if(zfc[i][j]=='A')
		   zfc[i][j]='T';
	   else if(zfc[i][j]=='T')
		   zfc[i][j]='A';
	   else if(zfc[i][j]=='C')
		   zfc[i][j]='G';
	   else if(zfc[i][j]=='G')
		   zfc[i][j]='C';
	   }
	   printf("%s\n", zfc[i]);
   }

   
   return 0;
}
