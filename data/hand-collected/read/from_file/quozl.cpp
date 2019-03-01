#include <stdio.h>

#define MAXVARS 0x200
#define MAXDICT (0x20000L)

int *word_dict = new int [MAXDICT];
#define DATA(ptr)  word_dict[ptr]

int variables[MAXVARS];
int dictionary[MAXDICT];

int read_int(FILE *fd)
{
    int r;
    r = fgetc(fd);
    r <<= 8;
    r += fgetc(fd);
    r <<= 8;
    r += fgetc(fd);
    r <<= 8;
    r += fgetc(fd);
    return r;
}

int
read_dictionary(char *name, int *up)
{
    FILE *fd;
    int here;
    int usize;
    int i;
    int upnum;

    if ((fd = fopen(name, "rb")) == NULL)
        throw;

    if (read_int(fd) != -4)
        throw;

    (void)read_int(fd);
    (void)read_int(fd);
    here = read_int(fd);
    upnum = read_int(fd);
    usize = read_int(fd);
    (void)read_int(fd);
    (void)read_int(fd);

    for (i = 0; i < here; i++)
        DATA(i) = read_int(fd);

    for (i = 0; i < usize; i++)
        up[i] = read_int(fd);

    (void)fclose(fd);

    return here;
}
