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
int c,r,s,a[100][100];
s=0;
scanf("%d %d",&r,&c);
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                scanf("%d",&a[i][j]);
                }
        }
while(c*r>=s){
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(i+j==s){
                     printf("%d\n",a[i][j]);
                     }    
                }
        }
        s++;
        }
int hou;
scanf("%d",&hou);
return 0;
}
