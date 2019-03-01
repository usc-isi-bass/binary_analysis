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
  int m,i,j,k,q=0,t=0,u,max;
  int b[26]={0};
  char c[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  struct as{
    int sh;
    char a[26];
  }cla[1000];
  scanf("%d",&m);
  for(i=0;i<m;i++){
   scanf("%d %s",&cla[i].sh,cla[i].a);
   t=(int)strlen(cla[i].a);
   for(k=0;k<t;k++){
    u=cla[i].a[k]-'A';
    b[u]++;
   }
  }
  max=0;
  for(j=0;j<25;j++)
    if(max<b[j]){
      max=b[j];
      q=j;
    }  
  printf("%c\n",c[q]);
  printf("%d\n",max);
  for(i=0;i<m;i++){
   t=(int)strlen(cla[i].a);
     for(k=0;k<t;k++)
      if(cla[i].a[k]==c[q])
       printf("%d\n",cla[i].sh);
  }
  return 0;
}
       
