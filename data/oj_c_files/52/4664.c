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



int main(int argc, char *argv[])
{
    int m,n;       int i,j,k;
    cin >> m >> n;
    int ary[m];
    for(i=0; i<m; i++){
             cin >> ary[i];
    }
    for(j=1; j<=n; j++){
             int temp;
             temp= ary[m-1];
             for(k= m-1; k>0; k--){
                      ary[k] =ary[k-1];
             }
             ary[0] = temp;
    }
    for(i=0; i<m; i++){
             cout << ary[i];
             if(i!=m-1)
             {         cout << " ";}
    }
             
   
    return EXIT_SUCCESS;
}
