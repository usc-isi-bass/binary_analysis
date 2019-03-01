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


void main()
{
   int n;
   scanf("%d",&n);
   char i,in[55][20];
   int j,k;
   for(i=1;i<=n+1;i++)
   {
	   gets(in[i]);
	   k=strlen(in[i]);
	   if(in[i][k-1]=='r'){for(j=0;j<k-2;j++){printf("%c",in[i][j]);}if(j==k-2)printf("\n");}
	   if(in[i][k-1]=='y'){for(j=0;j<k-2;j++){printf("%c",in[i][j]);}if(j==k-2)printf("\n");}
	   if(in[i][k-1]=='g'){for(j=0;j<k-3;j++){printf("%c",in[i][j]);}if(j==k-3)printf("\n");}
   
   }
   
   
}

