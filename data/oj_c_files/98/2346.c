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
      int n;
      scanf("%d",&n);
      char word[n][20];
      int i,sum=0;
      scanf("%s",word[0]);
      sum+=strlen(word[0])+1;
      for(i=1;i<n;i++){
              scanf("%s",&word[i]); 
              sum+=strlen(word[i]);
              if(sum>80){
                      printf("%s\n",word[i-1]);
                      sum=strlen(word[i])+1;
               }
               else{
                      printf("%s ",word[i-1]);
                      sum+=1;
              }
      }
      printf("%s",word[n-1]);
}   