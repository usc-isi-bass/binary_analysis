# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

static char     *read_from_file(int fd)
{
    int         i;
    char        *buf;
    char        *all_pieces;

    i = 0;
    buf = (char *)malloc(sizeof(char) * 1);
    all_pieces = (char *)malloc(sizeof(char) * 600);
    while (read(fd, buf, 1))
    {
        all_pieces[i] = *buf;
        i++;
    }
    all_pieces[i] = '\0';
    return (all_pieces);
}