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

int main(){
  int n,i,cd[50];
  char dc[50][32]={'0','0','0'};
  scanf("%d",&n);
  for(i=0;i<n+1;i++){
	  gets(dc[i]);
     cd[i]=strlen(dc[i]);
  }
  for(i=0;i<n+1;i++){
   if(dc[i][cd[i]-1]=='g')dc[i][cd[i]-3]=0;
   if(dc[i][cd[i]-1]=='r')dc[i][cd[i]-2]=0;      
   if(dc[i][cd[i]-1]=='y')dc[i][cd[i]-2]=0;
  }
  for(i=0;i<n+1;i++)
  printf("%s\n",dc[i]);
     
	  return 0;
}

