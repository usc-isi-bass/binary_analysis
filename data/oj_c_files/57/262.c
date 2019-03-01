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

int main(int argc, char* argv[])
{
	int a,l[100],i;
    char s[100][10];
    scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%s",s[i]);
        l[i]=strlen(s[i]);
 }
for(i=0;i<a;i++){
	if(s[i][l[i]-1]=='g'){
       for(int k=0;k<l[i]-3;k++){
			printf("%c",s[i][k]);
			}
 }
	else 
	{for(int k=0;k<l[i]-2;k++){
			printf("%c",s[i][k]);
	}
         
	}
 printf("\n");

}
	return 0;
}


