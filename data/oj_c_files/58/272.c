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
  char num[10];
  char s[1000][80];
  int n,i,j,l,m=0;
  gets(num);
  n=atoi(num);
  for(i=0;i<n;i++)
  {
       gets(s[i]);
       l=strlen(s[i]);
       
       if((s[i][0]<='z'&&s[i][0]>='a')||(s[i][0]<='Z'&&s[i][0]>='A')||(s[i][0]=='_'))
       {m=1;
       
       for (j=0;j<l;j++)
          {
           if((s[i][j]<='z'&&s[i][j]>='a')||(s[i][j]<='Z'&&s[i][j]>='A')||(s[i][j]>='0'&&s[i][j]<='9')||(s[i][j]=='_')) 
           {m=1;}
           else
           {m=0;}
           if(m==0)
           break;
           } 
       
       }
       else
       {m=0;}
      
        
           
         printf("%d\n",m);  
                                  
  }    
  getchar();
  getchar();
  return 0;      
}
