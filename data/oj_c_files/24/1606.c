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
    char s[453];
 
    char words[100][101];

    int i,k, n;

    // ???????
    gets(s);


    // ?s???????????words?
    n = 0; k = 0;
    for (i = 0; s[i] != 0; i++) {
        if (s[i] == ' '||s[i]==',') {
            s[i] = '\0';
            strcpy(words[n], (s + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(words[n], (s + k));
    n++;
   

    // ????words??????
    int maxlen=0, minlen=0;
    for ( i = 0; i < n; i++) {
		if (words[i][0]!='\0'){
       if (strlen(words[maxlen])<strlen(words[i])){
       maxlen=i;
	   }
		
       if(strlen(words[minlen])>strlen(words[i])){
       minlen=i;}
		}
    }
    printf("%s\n%s\n",words[maxlen],words[minlen]);
	
    return 0;
}

