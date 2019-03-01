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


int main(int argc, char *argv[])
{
  char word[40];
  int n,m,i,j,k,p,q,sum=0,flag=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {
       scanf("%s",word);
       if(sum==0)
       {
         printf("%s",word);
                
       }
      
       if(sum!=0&&sum<=80&&(sum+strlen(word))<=80)
       {
         printf(" %s",word);
                                            
       }
       
       if(sum!=0&&sum<=81&&(sum+strlen(word))>80)
       {
         printf("\n%s",word);sum=0;
                                           
       }
        sum+=strlen(word)+1;                         
  }
  	
  return 0;
}
