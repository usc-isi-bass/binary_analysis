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
	cin.getline(s,sizeof(s));
	int len = strlen(s);
	for (int i = 0;i < len;i++){
		if (i == len-1){//????????? 
			*(s1+i) = *(s+i)+*(s);//?????????????? 
		} else {
			*(s1+i) = *(s+i) + *(s+i+1);//??????????????? 
		}
	}
	*(s1+len) = '\0';//?????\0 
	cout << s1 << endl;//??????? 
	return 0;
}