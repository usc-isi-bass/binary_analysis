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
  int i,a[60]={0},flag=0,k;  char str[300]={0};
  short c;
  scanf("%s",str);
  for(i=0;i<300;i++)
    {
       k=str[i]-64;
     if(k>=1&&k<=26||k>32&&k<=58)    
                { a[k]++; flag=1;  }
    }
   if(flag==0)  printf("No\n");
  else  for(k=1;k<60;k++)
 { if(a[k]!=0) 
 {  c=k+64;
 printf("%c=%d\n",c,a[k]); } }
return 0;  
}
