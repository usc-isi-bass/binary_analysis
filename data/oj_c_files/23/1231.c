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
	int i,j,n,m,k,word;
	char a[100],*p,string[100],*pp[100],s[100][100];
	gets(a);
	n=strlen(a);
	k=1;
	for(p=a;p<a+n;p++)
 {
  if(*p==' ')
   word=0;
  else 
   if(word==0)
   {
    word=1;
    k++;
   }
 }
 i=0;
 j=0;
 p=a;
 m=0;
 while(*p!='\0')
 {
	 pp[i]=p;
  while(*p!=' ')
  {
	  
	  *(pp[i]+j)=*p;
  p++;
  j++;
  if(*p=='\0')
   break;
  }
 *(pp[i]+j)='\0';
 i++;
 p++;
 j=0;
 }
  
 for(i=k-1;i>0;i--)
	 printf("%s ",pp[i]);
 printf("%s",pp[0]);
}
