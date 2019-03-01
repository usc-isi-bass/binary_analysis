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


void main(){

   char *del(char a[15]);
   int n,i;
   char s[50][15];
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%s",s[i]);
   
   }
   for(i=0;i<n;i++){
   del(s[i]);
   printf("%s\n", s[i]);
   
   }
   


}

char *del(char a[15]){

	int b;
	b=strlen(a);
	if(a[b-2]=='e' && a[b-1]=='r')
		a[b-2]='\0';
	else if(a[b-2]=='l' && a[b-1]=='y')
		a[b-2]='\0';
    else if(a[b-3]=='i' && a[b-2]=='n' && a[b-1]=='g')
		a[b-3]='\0';
      return 0;
}