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
  char s1[100];
  int i,j,n,len,s2[100];
  scanf("%d",&n);
  getchar();
  for(i=0;i<n;i++)
  {
     //scanf("%s",s1);
     //getchar();
     gets(s1);
     len=strlen(s1);
     for(j=0;j<len;j++)
     {
        if(j==0)
        {
          if(!((s1[j]>='a'&&s1[j]<='z')||(s1[j]=='_')||(s1[j]>='A'&&s1[j]<='Z')))
          {
            s2[i]=0;/*printf("0\n");*/
            break;
          }
        }
        else
        {
          if(!((s1[j]>='a'&&s1[j]<='z')||(s1[j]=='_')||(s1[j]>='A'&&s1[j]<='Z')||(s1[j]>='0'&&s1[j]<='9')))
           {
             s2[i]=0;
             break;
           }
        }
     }
     if(j>=len)
          s2[i]=1;
  }
  for(i=0;i<n;i++)
     printf("%d\n",s2[i]);
  return 0;    
}
