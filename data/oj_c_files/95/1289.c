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
	char str1[80],str2[80],i;
	cin.getline(str1,80);
	cin.getline(str2,80);
	for(i=0;i<80;i++){
		if(str1[i]>=97&&str1[i]<=122)
			str1[i]-=32;
		if(str2[i]>=97&&str2[i]<=122)
			str2[i]-=32;
	}
	if(strcmp(str1,str2)==0)
		cout<<"="<<endl;
	if(strcmp(str1,str2)==1)
		cout<<">"<<endl;
	if(strcmp(str1,str2)==-1)
		cout<<"<"<<endl;
return 0;
}