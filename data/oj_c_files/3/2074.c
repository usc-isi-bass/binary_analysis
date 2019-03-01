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
int n,k,sz[1000];
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
        scanf("%d",&sz[i]);
        }
for(int j=0;j<n-1;j++){
        for(int l=j+1;l<n;l++){
                if(sz[j]+sz[l]==k){
                                  printf("yes");
                                  return 0;
                                  }
                }
        }
        printf("no");
  return 0;
}