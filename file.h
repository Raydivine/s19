#ifndef FILE_H
# define FILE_H

# include "io.h"
# include "decode.h"

# define MAX_INPUT_SIZE 1000

/**
**@define Read all characters from stream until the end of line.
*/
void clear_line(FILE* file);

/**
**@define Decode a s19 file.
*/
void decode_s19(FILE* file, unsigned char* memory);

/**
**@define Retrieve the file name what user wants to open.
**Then, it opens the file and put into memory.
*/
void retrieve_filename();

/**
**@define Open a file and put into the memory.
*/
void load_file(unsigned char* memory);

#endif /* !FILE_H */
