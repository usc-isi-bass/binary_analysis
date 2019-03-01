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
int n,i,q;
char a[1000][256];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",a[i]);
for(q=0;a[i][q]!='\0';q++){
if(a[i][q]=='A')
{
	a[i][q]='T';
}
else if(a[i][q]=='T'){
a[i][q]='A';
}
else if(a[i][q]=='C'){
a[i][q]='G';
}
else{
a[i][q]='C';

}

}
printf("%s",a[i]);
printf("\n");
}
return 0;

}