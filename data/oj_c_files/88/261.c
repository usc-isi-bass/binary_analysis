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
    char zifu[30];
    int i;

    gets(zifu);              /*?????*/

    for(i=0;i<strlen(zifu);i++){        /*?????????????*/
	if(zifu[i]>='0'&&zifu[i]<='9'){    /*????????'',??????
                                            ???????????0-9????*/
	    printf("%c",zifu[i]);
	}else{
	    if((zifu[i]<'0'||zifu[i]>'9')&&(zifu[i-1]>='0'&&zifu[i-1]<='9')){
		printf("\n");	/*????????*/
	    }
	}
    }
    return 0;

}
