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
int n,j,i=0,l;
char z[256];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",z);
l=strlen(z);
for(j=0;j<l;j++)
{if(z[j]=='A'){z[j]='T';}
else{if(z[j]=='T'){z[j]='A';}
else{if(z[j]=='C'){z[j]='G';}
else{z[j]='C';}
}
}
}printf("%s\n",z);}
return 0;
}
