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
int s[20],i=1,j,k,d=0;
  char c;
  do{
while(scanf("%d",&s[i]))
{
c=getchar();
if(c=='\n')
break;
i++;
}
     for(k=1;k<i;k++)
 {
  for(j=k+1;j<i;j++)
  {
if((s[k]==2*s[j])||(2*s[k]==s[j]))
d++;
  }

 }
 if(s[i]>-1)
printf("%d\n",d);
i=1;
d=0;
  }while(s[i]>-1);
 return 0; 

}
