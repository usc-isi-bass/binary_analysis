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

main()
{
   int m,n;
   scanf("%d %d",&m,&n);
   int key[20][20]={0},height[22][22]={0};
   for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        scanf("%d",&height[i+1][j+1]);
   for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
     {
         if(height[i+1][j+1]>=height[i][j+1]
           &&height[i+1][j+1]>=height[i+2][j+1]
           &&height[i+1][j+1]>=height[i+1][j]
           &&height[i+1][j+1]>=height[i+1][j+2])  
           key[i][j]=1;  
     }
   for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
       if(key[i][j]==1)
         printf("%d %d\n",i,j);
   getchar();
   getchar();   
}
