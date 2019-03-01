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

main()
{ int j,n;
      char str1[1001],str2[1001];
 gets(str1);
 for(j=0;;j++) 
 {if(str1[j]=='\0')
          { str2[j]='\0'; break;}
  if(str1[j]>='a'&&str1[j]<='z')
  str2[j]=str1[j]-'a'+'A';
  else str2[j]=str1[j];}

 for(j=0;;j=j+n)
 {if(str1[j]=='\0')
          { str2[j]='\0'; break;}
 
  for(n=0;;n++)
 if(str2[j]!=str2[j+n])
  {printf("(%c,%d)",str2[j],n);
 break;}}

   
}
