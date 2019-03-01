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
   int n,len,i,j;
   char str[256];
   cin>>n;
   for(i=0;i<n;i++)
   {
      cin>>str;
	  len=strlen(str);
	  for(j=0;j<len;j++)
	  {
	     switch(str[j])
		 {
		    case 'A': cout<<'T';break;
            case 'T': cout<<'A';break;
			case 'C': cout<<'G';break;
			case 'G': cout<<'C';break;
		 }
	  }
	  cout<<endl;
   }
   return 0;
}
