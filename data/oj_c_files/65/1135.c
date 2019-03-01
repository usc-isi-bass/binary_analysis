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
int A,B,a[200],b[200],n,i;
scanf("%d",&n);
A=0;
B=0;
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
if(b[i]-a[i]==1||a[i]-b[i]==2){
    A++;
    
}
else if(a[i]==b[i]){continue;}
else{B++;}
}
if(A>B){printf("A");}
else if(A==B){printf("Tie");}
else{printf("B");}
return 0;
}

