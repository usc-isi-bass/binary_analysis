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
int x1,y1,x2,y2,i,j,k;
int a[100][100]={0};
int b[100][100]={0};
int c[100][100]={0};
//////////////////////////////////////////
scanf("%d %d",&x1,&y1)   ;
for  (i=0;i<=(x1-1);i++)
     {    for (j=0;j<=(y1-1);j++)
           {
           scanf(    "%d",&a[i][j]   );
           }     
     }
//////////////////////////////////////////
scanf("%d %d",&x2,&y2)   ;
for  (i=0;i<=(x2-1);i++)
     {    for (j=0;j<=(y2-1);j++)
           {
           scanf(   "%d",&b[i][j]    );
           }     
     }
for (i=0;i<=(x1-1);i++) 
{
                        for (j=0;j<=(y2-1);j++)   
                        {
                        c[i][j]=0;
                        }
}
                        /*&#190;&#216;&#213;�3&#203;��?&#196;&#188;&#198;&#203;&#227;�&#189;��: 
&#182;&#212;��&#190;&#216;&#213;�A[m][q]*B[q][n], 
&#207;�3&#203;?&#196;&#189;�1&#251;&#206;a&#190;&#216;&#213;�C[m][n]&#199;�&#182;&#212;��&#190;&#216;&#213;�C&#214;D&#195;&#191;�&#187;&#207;&#238;&#182;&#188;�D 
C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ..... + A[i][q]*B[q][j] 
*/  
for (i=0;i<=(x1-1);i++) 
{                       for (j=0;j<=(y2-1);j++)   
                        {
                            for (k=0;k<=(x2-1);k++)
                            {
                            c[i][j]=c[i][j]+a[i][k]*b[k][j];
                            }
                        }
}
for (i=0;i<=(x1-1);i++) 
{
                        for (j=0;j<=(y2-1);j++)   
                        {
                        if (   j<(y2-1)   )
                        printf("%d ",c[i][j]);
                        else printf("%d\n",c[i][j]);
                        }
}    
  
    
}
