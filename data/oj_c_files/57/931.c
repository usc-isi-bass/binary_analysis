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
int n;
scanf("%d",&n);
char zfc[100][33];
int i,j;
for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
}

for(i=0;i<n;i++){
	j=strlen(zfc[i]);
	if(zfc[i][j-1]=='r'||zfc[i][j-1]=='y'){
	zfc[i][j-2]='\0';}
	else{zfc[i][j-3]='\0';}
}


for(i=0;i<n;i++){
	printf("%s\n",zfc[i]);}
		

	

return 0;
}
