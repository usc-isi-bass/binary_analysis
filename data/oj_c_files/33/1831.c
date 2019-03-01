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

main(){
int n,i,j,k;
char chm[257];
scanf("%d\n",&n);
i=0;

while(i<n){
for(j=0;j<257;j++)
chm[j]='\0';
gets(chm);
for(j=0;j<257;j++){
if(chm[j]=='T')
printf("A");
if(chm[j]=='A')
printf("T");
if(chm[j]=='C')
printf("G");
if(chm[j]=='G')
printf("C");
}
printf("\n");
i++;
}

}