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

  char s[101];
  char *p=s;
  



  cin.getline(s,sizeof(s));
  cout<<*p;
  p++;
  while(*p!='\0')
  {
	  if(*p!=32 || *p==32 && *(p-1)!=32)
	  {
	  cout<<*p;
	  }
	  p++;
  }
  



  





 


 

 

  
 


  





  

 
 return 0;

}





