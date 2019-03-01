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
int n[100][100],i,j,a,b,x;
scanf("%d %d",&a,&b);
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
scanf("%d",&n[i][j]);
}
for(int m=0;m<b;m++)
{
    int c=0;
    for(i=m;i>=0&&c<a;i--,c++)
        printf("%d\n",n[c][i]);
}
 int y; 

for(x=1;x<a;x++)
{   
     y=b-1;
    for(j=x;j<a&&y>=0;j++,y--)
     printf("%d\n",n[j][y]);
 }
int z;
scanf("%d",&z);
return 0;
}



