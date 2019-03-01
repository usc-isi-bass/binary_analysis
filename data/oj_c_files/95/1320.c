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
 char str1[85],str2[85];
 cin.getline(str1,85);
 cin.getline(str2,85);
 int l = max(strlen(str1), strlen(str2));
 for(int i=0;i<l;i++)
 {
	     if(str1[i]>=65&&str1[i]<=90)
			 str1[i]=str1[i]+32;
		 if(str2[i]>=65&&str2[i]<=90)
			 str2[i]=str2[i]+32;

		 if(str1[i]>str2[i])
			{ cout<<'>';
		 return 0;}
		 else if(str1[i]<str2[i])
		 {
		 cout<<'<';
		 return 0;
		 }
		 else if(str1[i]==str2[i])
			 continue;
		 
 }
cout<<'=';

  return 0;
  
}