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

int main(){
	char s[101],s1[101];
	cin.getline(s,101);
	char *p=NULL;
	p=s;
	int i=1;
	while(i<strlen(s)){
		s1[i-1]=*(p+i-1)+*(p+i);
		i++;
	}
	i--;
	s1[i]=s[0]+*(p+i);
	for(i=0;i<strlen(s);i++)
		cout<<(char)s1[i];
	return 0;
}