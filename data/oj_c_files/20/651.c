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
int max,i,max_index;
char str1[20],str2[10],ans[20],t[20];
while(scanf("%s %s",str1,str2)!=EOF)
{
  max=0;
  for(i=0;str1[i];i++)
  {
   if(str1[i]>max)
   {
    max=str1[i];
    max_index=i;
  }
  }
   strcpy(ans,"");
   strncat(ans,str1,max_index+1);
   strcat(ans,str2);
   for(i=max_index+1;str1[i];i++)
   {
    t[i-max_index-1]=str1[i];
   }
   t[i-max_index-1] = '\0';
   strcat(ans,t);
  
  printf("%s\n",ans);
}
return 0;
}
