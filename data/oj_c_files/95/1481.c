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
   int n,m,i,j,k,s=0;
   char a[2][80];
   gets(a[0]);
   gets(a[1]);
   for(i=0;i<2;i++)
   for(j=0;;j++)
   {
	if((a[i][j]>='A')&&(a[i][j]<='Z'))
	a[i][j]=a[i][j]-'A'+'a';
	if(a[i][j]==0)break;
   }

   if(strcmp(a[0],a[1])==0)printf("=");
   if(strcmp(a[0],a[1])>0)printf(">");
   if(strcmp(a[0],a[1])<0)printf("<");

   
 
}