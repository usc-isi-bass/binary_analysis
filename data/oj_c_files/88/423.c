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
	char f[10000];
	cin.getline(f,10000);
	for(int i=0;i<strlen(f);i++){
		if(f[i]-'0'>=0&&f[i]-'0'<=9)
			cout<<f[i];
		if((f[i]-'0'>=0&&f[i]-'0'<=9)==0&&(f[i+1]-'0'>=0&&f[i+1]-'0'<=9)==1)
			cout<<endl;
	}
	return 0;
}