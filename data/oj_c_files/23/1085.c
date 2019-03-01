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
    char q;
    char a[101][101];
    int tot[101];
    int sum=1;
    int i,j;    
    scanf("%c",&q);    
    
    
    while (q!='\n')
           if (q==' ') {sum++;scanf("%c",&q);} else  
       {      
           tot[sum]++;               
           a[sum][tot[sum]]=q;
           scanf("%c",&q);        
       }
    for (i=sum;i>1;i--) 
        {
            for (j=1;j<=tot[i];j++)  printf("%c",a[i][j]);
            printf(" ");
        }
    for (j=1;j<=tot[1];j++)  printf("%c",a[i][j]);
 //   scanf("%c",&q);        
               
}
