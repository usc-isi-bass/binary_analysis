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
 	char s[30000];
    int wc,a[100],i,j;
    wc=0;
 	gets(s);
 	for(i=0;s[i]!=0;i++)
 	{
	 					if(s[i]!=' '){
	 					for(j=i+1;s[j]!=0&&s[j]!=' ';j++);
	 					a[wc]=j-i;
	 					wc++;
						if(s[j]=0){
								   break;
								   }else{
								   		 i=j;
										 }
										 }
										 }
 	printf("%d",a[0]);
 	for(i=1;i<wc;i++)
 	{
	 				 printf(",%d",a[i]);
					 }
 
  return 0;
}
