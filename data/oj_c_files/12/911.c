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
   int a[1000],n,b[15],m,i,j,z,num=0;
   memset(a,0,1000*sizeof(int));
   memset(b,0,15*sizeof(int));
 while(1){
             i=0;
 do{

 scanf("%d",&m);
 if(m==0)
  break;
  if(m==-1)
  break;
 b[i]=m;
 i++;

 }while(1);
 if(m==-1)
 break;

 for(j=0;j<i;j++){
  for(z=0;z<i;z++){
   if(b[j]*2==b[z])
    a[num]++;
  }
 }
 num++;


 }
 for(j=0;j<num;j++)
  printf("%d\n",a[j]);

  return 0;
}