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
	int n,i,len,j;
	char a[256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		len=strlen(a);
		for(j=0;j<len;j++){
			switch(a[j]){
			case 'A':a[j]='T';break;
			case 'C':a[j]='G';break;
			case 'G':a[j]='C';break;
			case 'T':a[j]='A';break;
			}


			
		}
		printf("%s\n",a);
	}



	
	return 0;
}
