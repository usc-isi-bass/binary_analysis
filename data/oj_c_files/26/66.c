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
   char str[100];                     //??????
   int i,j,m=1;                        //??????i,j?m??????
   cin.getline(str,100);
   for(i=0;str[i]!='\0';)               //???????????????????????????????????????????
   {
	   m=1;
	   if(str[i]==' '){
		   for(j=1;str[i+j]==' ';j++)
			   m++;
		   cout<<str[i];
		   i+=m;
	   }
	   else cout<<str[i++]; 
   }
   return 0;
}
   