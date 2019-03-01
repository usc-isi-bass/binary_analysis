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
char *pt=t,*px=x;
gets(t);
for (;*pt!='\0';pt++,px++){
	if ((*pt!=' ')||((*pt=' ')&&(*(pt-1)!=' '))){
		
	*px=*pt;	
	}
	else {px--;}

}
*px='\0';
printf ("%s",x);
return 0;
}