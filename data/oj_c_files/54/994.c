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



int main(int argc, char* argv[])
{
        int n,k,m;
        int apple(int n,int k);
        scanf("%d%d",&n,&k);
        m=apple(n,k);
        printf("%d",m);
        return 0;
}

        int apple(int n,int k){

            int m,rest,i;
			
			for(rest=1,i=1;i<=n;i++){
			if(i==1) m=rest*n+k;
			else if(m%(n-1)==0){
            m=m*n/(n-1)+k;}
			else{rest++;i=0;}}
			return m;}