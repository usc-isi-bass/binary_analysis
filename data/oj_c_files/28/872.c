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
 char s[6000];
 char tem[100];
 int i=0; 
 int m,p,j;
 p=0;
 gets(s);
 int t;
  t=strlen(s);
 for (m=0;m<t+1;m++){
  if(s[m]!=' '&&s[m]!='\0'){
   tem[i]=s[m];
   i++;
  }
  else {
   if(p==0){
      tem[i]='\0';
   printf("%d",strlen(tem));
   i=0;
   p=1;
   for (j=m+1;;j++){
	   if (s[j]!=' '){
		   m=j-1;
		   break;
	   }
   }
   }
   else { 
   tem[i]='\0';
   printf(",%d",strlen(tem));
   i=0;
   for (j=m+1;;j++){
	   if (s[j]!=' '){
		   m=j-1;
		   break;
	   }
   }
   }
  }
  }
  return 0;
 } 
