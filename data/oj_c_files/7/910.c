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

char zfc[3][257];
int main(){
	gets(zfc[1]);
	gets(zfc[2]);
	gets(zfc[3]);
	int i,k,len,len2,j;
	len=strlen(zfc[1]);
	len2=strlen(zfc[2]);
	for(i=0;i<len;i++)
	{
		if((zfc[1][i]==zfc[2][0])&&(zfc[1][i+1]==zfc[2][1]))
			break;
	}
	if(i!=len)
	{
	  for(k=i;k<(len2+i);k++)
	  {
		  j=k-i;
		  zfc[1][k]=zfc[3][j];
	  	  if(k==len2+i)
			  break;
	  }
	}
	printf("%s",zfc[1]);
	return 0;
}