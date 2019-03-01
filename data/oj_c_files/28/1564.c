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

int main(){
        char a[2000];
        int sz[256],i,j,k;
        gets(a);
        j=0;
        k=0;
        for(i=0;a[i]!='\0';i++){
                j++;
                if(a[i]==' '&&a[i-1]==' '){
                        j--;
                        continue;
                }
                if(a[i]==' '){
                        sz[k]=j-1;
                        j=0;
                        k++;
                }
                if(a[i+1]=='\0'){
                        sz[k]=j;
                }
        }
        printf("%d",sz[0]);
        for(i=1;i<=k;i++){
                printf(",%d",sz[i]);
        }


                

return 0;


}
