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

//****************************************************** 
/* ? ? ?   ???????? 
/* ? ?      ????                           
/* ? ? ? ??2010 ? 12  ?  15  ?     
/* ? ? ? ?????????
/* ? ?      ?1000012752        
*******************************************************/ 
int main()                                  
{
	int length,i;
	char s[102],s1[101];				//s???????s1??????
	cin.getline(s,101);
	length = strlen(s);					//????
	s[length] = s[0];					//s??\0????????
	for(i=0 ; i<length ; i++)			//??0???length-1???s1?s??i????ASCII????????ASCII?
		s1[i] = s[i] + s[i+1];
	s1[length] = '\0';					//?s1???\0
	cout << s1;							
    return 0;
}
                          
    
    
