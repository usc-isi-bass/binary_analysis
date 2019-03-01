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
  int i,j,len,c=1,d=25;
  char dc[51][50],zc[50],zd[50];
  for(i=0;i<20;i++)
  {
               scanf("%s",&dc[i]);
               if((dc[i][0]>='a'&&dc[i][0]<='z')||(dc[i][0]>='A'&&dc[i][0]<='Z'))
               {
                                                                                 
               len=strlen(dc[i]);
               if(len>c){ strcpy(zc,dc[i]); c=len;}
               if(len<d){ strcpy(zd,dc[i]); d=len;}
               }
  }
  puts(zc);
  puts(zd);
               
  return 0;

}

