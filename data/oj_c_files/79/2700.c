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

main() 
{ 
int n[10000], m[10000], i, s; 
for(int q=0;q<10000;q++){
     scanf("%d%d", &n[q],&m[q]); 
	 if(n[q]==0&&m[q]==0){
		 break;
	 }
	 else if(n[q]!=0&&m[q]!=0){
		 s=0;
		 for(i=2; i<=n[q]; i++) {
             s=(s+m[q])%i;
		 }
          printf("%d\n", s+1); 
	 }
} 
return 0;
}