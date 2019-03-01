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
  char s[100],w[200];
  int i,j,k;
  scanf("%s%s",s,w);
  for(i=0;w[i]!=0;i++){
  					   if(w[i]==s[0]){
  					   for(k=i+1,j=1;s[j]!=0;j++){
					   						if(w[k]!=w[j])
					   						break;
											}
											printf("%d",i);
											break;
											}
											}
	
  return 0;

}
