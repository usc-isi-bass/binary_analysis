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

int a[5][5];
        int i=0, j=0, m=0, n=0, t=0;
int main()
{
	
        for(i=0;i<5;i++){
           for(j=0;j<5;j++){
               scanf("%d ", &a[i][j]);
              }
                }
        scanf("%d%d",&n,&m);
        if((n<5)&&(m<5)){
            for(i=0;i<5;i++){
               t=a[n][i];
               a[n][i]=a[m][i];
               a[m][i]=t;}
            for(i=0;i<5;i++){
               for(j=0;j<4;j++){
                  printf("%d ",a[i][j]);
                }
			   printf("%d",a[i][4]);
                  printf("\n");}
         }
        else printf("error");
	return 0;
}
