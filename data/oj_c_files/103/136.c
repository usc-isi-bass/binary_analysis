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
char a[1001];
char k[2];
k[1]='\0';
scanf("%s",a);
int i;
for(i=0;a[i]!='\0';i++){
if((a[i]>='a')&&(a[i]<='z'))
a[i]=a[i]+'A'-'a';
else
continue;
}
i=0;
int j=1;
while(a[i]!='\0'){


if(a[i]==a[i+1])
{
j++;
i++;
}


else{

k[0]=a[i];
printf("(%s,%d)",k,j);

i++;
j=1;
}

}
}

