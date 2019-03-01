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
 char *p=NULL;                 //????
 char string_1[1000];            //???????????
 gets(string_1);                      
 p=string_1;
 int clen,kong=0;
 clen=strlen(string_1);
 for(int i=0;i<clen;i++)
 {
  if(*(p+i)==' ')
  {
   if(*(p+i-1)==' ')
   {
	   kong++;                   //???++
    for(int j=i;j<clen-kong;j++)
	{
	 *(p+j)=*(p+j+1);
	}
	i--;
	*(p+clen-kong)='\0';            //?????????????'\0'
   }
  }
 }
 cout<<p<<endl;
}
