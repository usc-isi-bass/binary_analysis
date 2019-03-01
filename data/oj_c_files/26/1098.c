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

int main (){
char t[150],x[150];
gets(t);
int i,j;
for (i=0,j=0;t[i]!='\0';i++,j++){
	if ((t[i]!=' ')||((t[i]=' ')&&(t[i-1]!=' '))){
		x[j]=t[i];	
	}
	else {j--;}
}
x[j]='\0';
printf ("%s",x);
return 0;
}