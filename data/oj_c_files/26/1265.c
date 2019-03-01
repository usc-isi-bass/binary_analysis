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
    char zfc[1000],cs[1000];
memset(zfc,0,1000);
memset(cs,0,1000);
int y,e=0,j=0,i=0;
gets(zfc);
    y=strlen(zfc);
while(i<y){
e=0;
cs[j]=zfc[i];
if(zfc[i]==' '){
for(int a=i+1;a<y;a++){
if(zfc[a]==' '){
e++;
continue;
}
else{
break;
}
}
i=i+e;
}
j++;
i++;
}
cs[j+1]='\0';
printf("%s",cs);
return 0;
}

