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
    int N;
    cin>>N;
    int * ar;
    if(NULL==(ar=(int *) malloc(N*sizeof(int)))){
        perror("error...");
        exit(1);
    }
    for(int i=0;i<N;i++) cin>>*(ar+i);
    for(int i=0;i<N;i++) {
        cout<<*(ar+N-i-1);
        if(i!=N-1) cout<<' ';
    }
    free(ar);
    ar=NULL;
    return 0;
}
