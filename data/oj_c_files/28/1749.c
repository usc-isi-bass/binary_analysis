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
  char zfc[30000];
  int i,len,length[301]={0},t=0,k;
  gets(zfc);
  len=strlen(zfc);
  for(i=0;i<len;i++)
  {   
      if(zfc[i]==' ')
      {
          for(k=i+1;;k++)
          {
              if(zfc[k]==' ')
              {
                  continue;
              }
              else
              {
                  t++;
                  i=k;
                  break;
              }
          }
      }
      length[t]++;
  }
  for(i=0;i<=t;i++)
  {
      if(i==0)
      {
           printf("%d",length[0]);
      }
      else
      {
          printf(",%d",length[i]);
      }
  }
  return 0;
}                
      
                                     
      
                 
              
              
                            
                    
