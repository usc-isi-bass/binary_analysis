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
 char str[305];
 int n,i,m,N[26]={0},p=0;
 gets(str);
 n=strlen(str);
 for(i=0;i<n;i++)
  {
    if(str[i]<='z'&&str[i]>='a') {
      m=str[i]-'a';
      N[m]++;
      p++;
      }
    else continue;
   }
 if(p==0) printf("No");
else
 for(m=0;m<26;m++)
 if(N[m]!=0) printf("%c=%d\n",m+'a',N[m]);
}
