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
char a[256],b[256],c[256];
int q,w,e,i,k,j;
scanf("%s",a);
scanf("%s",b);
scanf("%s",c);
q=strlen(a);
w=strlen(b);
e=strlen(c);

for(i=0;i<q;i++){
j=0;
for(k=i;(k<i+w)&&(k<q);k++){

if(a[k]!=b[k-i]){continue;}
if(a[k]==b[k-i]){j++;}
if(j==w){for(k=i;(k<i+w)&&(k<q);k++){
	a[k]=c[k-i];}break;}
}
if(j==w){




break;}

}

printf("%s",a);

return 0;
}

