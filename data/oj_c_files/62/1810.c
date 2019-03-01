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

//******************
//**???????**
//*?? 1100012915**
//******11.29*******
//******************

int main() 
{ 
char start[200], result[200]; //????????
char *p = NULL ;			//????
int i = 0, j ;
cin.getline( start ,200);	//??????
for ( p = start; *p != '\0'; p ++ ) 
{ 
	if( ( *p != ' ') || ( *( p + 1 ) != ' ' ) )//????????????????????????
		cout << *p ;		//??
}
return 0;
}