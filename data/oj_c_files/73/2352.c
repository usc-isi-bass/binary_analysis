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

// ??.cpp : ??????????????
//

void main() 
{ 
int i,j,k=0; 
int a[5][5],max[5],min[5]; 
for(i=0;i<5;i++) 
for(j=0;j<5;j++) 
scanf("%d",&a[i][j]); 
for(i=0;i<5;i++)max[i]=a[i][0];
for(j=0;j<5;j++)min[j]=a[0][j];
for(i=0;i<5;i++)
{
  for(j=0;j<5;j++)
        {
            if(a[i][j]>max[i])max[i]=a[i][j];
            if(a[i][j]<min[j])min[j]=a[i][j];
        }
}
for(i=0;i<5;i++)
    {
   for(j=0;j<5;j++)
      {   
            if(max[i]==min[j])
            {printf("%d %d %d",i+1,j+1,a[i][j]);
             k++;}
       }
    }
 if(k==0)  printf("not found");
}
