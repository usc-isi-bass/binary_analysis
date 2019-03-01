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
        int n,i,k,d,total;
		total=0;
        int shuzu[16];
        for(i=0;i<16;i++){
        scanf("%d",&n);
		if(n!=-1){
        shuzu[i]=n;
		if(n==0){
		for(d=0;d<i;d++){
		for(k=0;k<i;k++){
			if(shuzu[d]==2*shuzu[k]){
				total++;}}}
			printf("%d\n",total);
		i=-1;
		total=0;}
         }
		else{
			break;}}

        return 0;
}


