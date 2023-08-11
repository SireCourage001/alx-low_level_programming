#include "main.h"

/**
<<<<<<< HEAD
* create_file - Create a file,
* @filename: A pointer to the name of the file created,
* @text_content: A pointer to a string to write to the file,
=======
* crete_file - create  file.
* @filename: A pointer to the name of the file created.
* @text_content: A pointer to a string to write to the file.
>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
* Return: If the function fails -1,
* Otherwise 1.
*/
int create_file(const char *filename, char *text_content)
<<<<<<< HEAD

=======
{
>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
int fd, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
<<<<<<< HEAD
{for (len = 0; text_content[len];)
len++;
}

=======
{
for (len = 0; text_content[len];)
len++;
}


>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, len);

if (fd == -1 || w == -1)
return (-1);

close(fd);
<<<<<<< HEAD

return (1);
}
=======
return (1);
}

>>>>>>> 359daf1a4f6765d61113e7ca8e38c1744eb107a1
