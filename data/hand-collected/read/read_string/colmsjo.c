/*
 * FCRON - periodic command scheduler 
 *
 *  Copyright 2000-2014 Thibault Godouet <fcron@free.fr>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 *  The GNU General Public License can also be found in the file
 *  `LICENSE' that comes with the fcron source distribution.
 */



/* read a string (password, etc ...) securely from a tty */

#include <string.h>
#include <termios.h>
#include <unistd.h>

/* Derived from Andrew Morgan <morgan@linux.kernel.org> work in Linux PAM misc lib. */

/* may be used in fcrondyn without pam : */
#ifndef HAVE_LIBPAM
#define PAM_MAX_MSG_SIZE 100
#endif

#define Overwrite(x) \
        do {                     \
          register char *__xx__; \
          if ((__xx__=(x)))      \
            while (*__xx__)      \
              *__xx__++ = '\0';  \
        } while (0)


char *
strdup2(const char *str)
{
    char *ptr;

    if (str == NULL)
        return NULL;

    ptr = strdup(str);

    if (!ptr)
        die_e("");

    return (ptr);
}

char *
read_string(int echo, const char *prompt)
    /* read a line of input string, giving prompt when appropriate */
{
    struct termios term_before, term_tmp;
    char line[PAM_MAX_MSG_SIZE];
    int nc, have_term = 0;

    if (isatty(STDIN_FILENO)) { /* terminal state */

        /* is a terminal so record settings and flush it */
        if (tcgetattr(STDIN_FILENO, &term_before) != 0) {
            return NULL;
        }
        memcpy(&term_tmp, &term_before, sizeof(term_tmp));
        if (!echo)
            term_tmp.c_lflag &= ~(ECHO);
        have_term = 1;

    }
    
    /* reading the line */
    while (1) {

        /* this may, or may not set echo off -- drop pending input */
        if (have_term)
            (void)tcsetattr(STDIN_FILENO, TCSAFLUSH, &term_tmp);

        nc = read(STDIN_FILENO, line, sizeof(line) - 1);
        if (have_term) {
            (void)tcsetattr(STDIN_FILENO, TCSADRAIN, &term_before);
        }
        if (nc > 0) {           /* we got some user input */
            char *input;

            if (nc > 0 && line[nc - 1] == '\n') {       /* <NUL> terminate */
                line[--nc] = '\0';
            }
            else {
                line[nc] = '\0';
            }
            input = strdup2(line);
            Overwrite(line);

            return input;       /* return malloc()ed string */
        }
        else if (nc == 0) {     /* Ctrl-D */
            break;
        }
    }

    if (have_term)
        (void)tcsetattr(STDIN_FILENO, TCSADRAIN, &term_before);

    memset(line, 0, PAM_MAX_MSG_SIZE);  /* clean up */
    return NULL;
}