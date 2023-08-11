#include "main.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
* read_textfile - Read txt file print to STDOUT,
* @filename: txt file being read,
* @letters: num of letters to be read.
* Return: w - actual num of bytes read and printed,
* 0 when function fails or filename is NULL.
=======
* read_txtfile: Read txt file to print STDOUT
* @filename: text file being read
* @letters: num of letters to be read
* Return: w- actual num of bytes read and printed.
* 0 when function fails, or file_name is NULL.
>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
<<<<<<< HEAD
=======

>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
<<<<<<< HEAD

return (w);
}
=======
return (w);
}

>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
