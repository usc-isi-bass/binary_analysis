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
 * xitishuzu12.cpp
 *
 *  Created on: 2013-11-1
 *      Author: 
 */
int main ()
{
	char a[100];
	int i,k;
	cin.getline(a,100);
	for(i=0;a[i]!='\n';i++)
		if(a[i]==' ')
			{
			  while (a[i+1]==' ')
			  {
				  for(k=i+1;k<strlen(a);k++)
				  {
				    a[k]=a[k+1];
				  }
			  }
			}
	cout<<a<<endl;
	return 0;
}

/*
???????????????????????????????????
????
??????????????????
????
???????
????
Hello      world.This is    c language.
????
Hello world.This is c language.
????
*/
