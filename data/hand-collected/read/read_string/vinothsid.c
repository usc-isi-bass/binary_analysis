/*
 * readString module
 */

#include <stdio.h>
// #include <sys/mman.h>
#include <string.h>
#include <stdlib.h>

#define BUFSIZE 36

void readString(char *s, int r) {
   char buf[BUFSIZE + r];
   int i = 0; 
   int c;

   for (;;) {
      c = fgetc(stdin);
      if ((c == EOF) || (c == '\n')) 
         break;
      buf[i++] = c;
   }
   buf[i] = 0;

   for (i = 0; i < BUFSIZE; i++) 
      s[i] = buf[i];
}