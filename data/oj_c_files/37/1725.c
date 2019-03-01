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
int t,a[27]={0},i,j,k;
char str[100000];
scanf("%d",&t);
for(i=0;i<t;t++)
{
    memset(str,'\0',100000*sizeof(char)); 
    memset(a,0,27*sizeof(int));
    scanf("%s",str);
    for(j=0;j<strlen(str);j++)
     {
      k=str[j]-96;
      a[k]++;                          
     } 
     for(j=0;j<strlen(str);j++)
     {
       k=str[j]-96;   
      if(a[k]==1)
      {   printf("%c\n",str[j]);
          break;}   
      }     
     if(j==strlen(str))
     {printf("no\n");
      break;}  
}   
    

return 0;    
} 