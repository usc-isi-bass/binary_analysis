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
	char sentence[100] ;
	int i ,len,flag[100]={0};
	cin.getline(sentence,100);
	len=strlen(sentence);
	for(i=0;i<len;i++)
		if (sentence[i]==' '&&sentence[i+1]==' ') flag[i+1]=1;
	for(i=0;i<len;i++)
		if(flag[i]==0) cout<<sentence[i];
	return 0 ;
}