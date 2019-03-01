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

/*
 *????????
 *?????
 *??: 2011-1-7
 */


int main(){
    char s[100];
    cin.getline(s,100);
    int i=0;
    while(i<strlen(s)){
    	while(s[i]-'0'<=9&&s[i]-'0'>=0){
    		cout<<s[i];
    	    i++;
    	}
    	cout<<endl;
    	while(!(s[i]-'0'<=9&&s[i]-'0'>=0)&&i<strlen(s)){
    	    i++;
    	}
    }
	return 0;
}