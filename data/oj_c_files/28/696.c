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
   int n=0,i,k=0,p;
   char s[800],word[400][900];
   gets(s);
    for (i = 0; s[i]!=0; i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '\0';
            strcpy(word[n], (s + k));
            n++;
           k=i+1;
       
        }
       }
    strcpy(word[n],(s+k));
    n=n+1;
    for(i=0;i<n-1;i++)
    {
      p=strlen(word[i]);
      if(p==0)
          continue;
      else
      printf("%d,",p);
    }
	p=strlen(word[n-1]);
      printf("%d",p);
      return 0;

}