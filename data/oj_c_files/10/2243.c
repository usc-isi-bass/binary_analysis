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

// itc online practice nov 13 prob 6
int k; 
int height[26];
int len(int num) {
    int temp,max,i; 
    if (num==k) {
                return(1);
    } else {
            max=0; 
            for (i=num+1;i<=k;i++) {
                if (height[num]>=height[i]) {
                                            temp=len(i);
                                            if (max<temp) {
                                                          max=temp;
                                            }
                }
            }
    }
    return(max+1);
} 
main() {
       height[0]=30001; 
       scanf("%d",&k);
       int i;
       for (i=1;i<=k;i++) {
           scanf("%d",&height[i]);
       }
       printf("%d",len(0)-1);
       scanf("%d",&k);
}
