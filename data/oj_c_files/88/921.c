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

//????
int main()
{
	char a[32];
   cin.getline(a ,32);//??
  char *p=a;
 for(int i=1;i<=strlen(a);i++)
 {
   if(*p>='0'&&*p<='9')
	  { cout<<*p;
   p++;
   }//???????
   else
	 {  cout<<endl;
   p++;
   }
 }//????????
   
   return 0;

}
