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

int main(int argc, char** argv[])
{    char s1[80],s2[80];
int i;
     gets(s1);
	 gets(s2);
	 for(i=0;i<80;i++){
		 if(s1[i]>=97&&s1[i]<=122){
			 s1[i]=s1[i]-32;}
          if(s2[i]>=97&&s2[i]<=122){
			 s2[i]=s2[i]-32;}
	 }


	 if(strcmp(s1,s2)==0){
		 printf("=");}
	 if(strcmp(s1,s2)>0){
		 printf(">");}
	 if(strcmp(s1,s2)<0){printf("<");}
	 return 0;
	 }

