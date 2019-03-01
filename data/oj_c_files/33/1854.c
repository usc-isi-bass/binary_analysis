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
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++){
    char s[255];
    scanf("%s", &s);
	  
    for(j=0;s[j];j++){
	     if(s[j]=='A')
		s[j]=s[j]-'A'+'T';
	     else if(s[j]=='T')
	         s[j]=s[j]-'T'+'A';
	     else if(s[j]=='C')
	         s[j]=s[j]-'C'+'G';
	     else if(s[j]=='G')
                  s[j]=s[j]-'G'+'C';
      }
	
         printf("%s\n", s);

   }
    return 0;

}