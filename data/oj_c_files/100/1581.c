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
	char str[300];
 int num[58]={0};
 int i,len,t=0;
 scanf("%s",str);
 len=strlen(str);
 for(i=0;i<len;i++)
   if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
    num[str[i]-'A']++;
 
   for(i=0;i<58;i++){
	   if(num[i]!=0){
	 	 printf("%c=%d\n",i+'A',num[i]);
		 t=1;}
   }
    if (t==0) 
	  printf("No\n");
   return 0;
}
