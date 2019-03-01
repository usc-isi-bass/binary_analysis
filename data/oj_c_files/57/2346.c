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
int n,i,k,b[51];
char a[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",a);
b[i]=strlen(a);
for(k=0;k<b[i];k++){
if(a[k]=='e'&&a[k+1]=='r'&&a[k+2]=='\0'){a[k]='\0';break;}
else if(a[k]=='l'&&a[k+1]=='y'&&a[k+2]=='\0'){a[k]='\0';break;}
else if(a[k]=='i'&&a[k+1]=='n'&&a[k+2]=='g'&&a[k+3]=='\0'){a[k]='\0';break;}
}
printf("%s\n",a);
}



return 0;
}
