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

// work2 1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"


int main(int argc, char* argv[])
{
	int n;
	int arr[100];
	scanf("%d",&n);
	int i,j;

	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}

	int t,k=0;

	for (i=0;i<n;i++) {
		for (j=i;j<n;j++) {
			if (arr[i]<arr[j]) {
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
//			for (k=0;k<n;i++) {
//		printf("%d  ",arr[i]);
//	}
			}
		}
	}

	for (i=0;i<2;i++) {
		printf("%d\n",arr[i]);
	}
	return 0;
}
