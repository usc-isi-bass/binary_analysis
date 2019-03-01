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
  char a[50],b[50];
  int i,j;
  scanf("%s %s",a,b);
  for(i=0;b[i]!='\0';i++){
	  for(j=0;a[j]!='\0';j++){
		  if(a[j]!=b[i+j]) break;
		  printf("%d\n",i);
  break;}}
	return 0;
}