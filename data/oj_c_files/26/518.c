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
	char a[200];
	int len,i,j,k,num=0;

	cin.getline(a,200);
	len=strlen(a);
	for(k=0;k<len;k++){
	num=0;
	for(i=0;i<len;i++){
		if(a[i]==' '){
			if(a[i+1]==' '){
			num++;
			for(j=i;j<=len-num;j++)
				a[j]=a[j+1];
		}
		}
	}
	}
	len=strlen(a);
	for(i=0;i<len;i++)
		cout<<a[i];
	return 0;
}