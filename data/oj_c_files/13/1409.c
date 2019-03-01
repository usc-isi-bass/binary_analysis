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
     int n,a[20000],i,j,m=0;
     scanf("%d",&n);
     for(i=0;i<n;i++){
                       scanf("%d",&a[i]);}
                       for(i=0;i<n;i++){
                                        m=0;
                           for(j=0;j<i;j++){
                                            if(a[j]==a[i])
                                            m=1;
                                            }
                                            if (m==0&&i==0)
                                            printf("%d",a[i]);
                                            if(m==0&&i>0)
                                            printf(" %d",a[i]);
                                            }            

            return 0;
              }
