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
    int i,j,A[80]={0};
    int k=1;
    char s[80];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]==s[0])
       {
           A[k]=i;
           k++;
       }
       if(s[i]!=s[0])
      {
          printf("%d %d\n",A[k-1],i);
          k--;
       }
    }
     return 0;
}
