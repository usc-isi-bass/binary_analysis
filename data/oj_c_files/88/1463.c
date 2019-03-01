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

char a[35];
int main()
{
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(isdigit(a[i])!=0){
			if(isdigit(a[i+1])!=0)
				cout<<a[i];
			else
				cout<<a[i]<<endl;
		}
	}
	
	
}