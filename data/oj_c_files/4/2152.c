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
    int row, col,n,i,j,k,a[120][120];
    scanf("%d %d", &row, &col);
    for(i=1;i<=row;i++){
                        for(j=1;j<=col;j++)
                                           {scanf("%d", &a[i][j]);}
                        }
    for(i=1;i<=col;i++){
                        k=i;
                        j=1;
                        while(k>=1&&j<=row){
                                    printf("%d\n", a[j][k]);
                                    j++;
                                    k--;
                                    }
                        }
    for(j=2;j<=row;j++){
                                     k=col;
                                     i=j;
                                     while(j<=row&&k>=1){
                                                       printf("%d\n", a[j][k]);
                                                       j++;
                                                       k--;
                                                       }
                                    j=i;
                                    }
    return 0;
    }
