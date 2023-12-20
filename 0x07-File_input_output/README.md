## Files in C Programming - Input & Input
## Opening and Closing Files:
fopen Function:

To work with files in C, you first need to open them using the fopen function.

## Code snippet
FILE *fptr;
fptr = fopen("filename.txt", "mode");
File Modes:

The second parameter of fopen specifies the mode of opening the file ("r", "w", "a", "rb", "wb", "ab", etc.).
Common modes:
"r": Read
"w": Write (creates a new file or truncates an existing file)
"a": Append (writes at the end of an existing file)
"rb", "wb", "ab": Read, write, or append in binary mode
fclose Function:

Always close the file using fclose after finishing operations.
c
## Code snippet
fclose(fptr);
Reading from Files:
fgetc Function:

Reads a character from a file.

## Code snippet
char ch = fgetc(fptr);
fgets Function:

Reads a line from a file.

## Code snippet
char buffer[100];
fgets(buffer, sizeof(buffer), fptr);
fscanf Function:

Reads formatted data from a file.

Code snippet
int value;
fscanf(fptr, "%d", &value);
Writing to Files:
fputc Function:

Writes a character to a file.

## Code snippet:
fputc('A', fptr);
fputs Function:

Writes a string to a file.

## Code snippet:
fputs("Hello, World!", fptr);
fprintf Function:

Writes formatted data to a file.

## Code snippet:
fprintf(fptr, "Value: %d\n", value);
File Positioning:
fseek Function:

Moves the file position indicator.

## Code snippet:
fseek(fptr, offset, SEEK_SET); // Move to the beginning
fseek(fptr, offset, SEEK_CUR); // Move relative to the current position
fseek(fptr, offset, SEEK_END); // Move to the end
ftell Function:

Returns the current file position.
## Code snippet:

long position = ftell(fptr);
Binary File Operations:
Reading and Writing Binary Files:
For binary files, use "rb", "wb", "ab" modes.
Use fread and fwrite functions for binary data.
Code snippet:

fread(buffer, sizeof(char), sizeof(buffer), fptr);
fwrite(data, sizeof(int), count, fptr);
Error Handling:
Check for NULL:

Always check if fopen returns NULL to ensure the file is opened successfully.
Code snippet:

if (fptr == NULL) {
    perror("Error opening file");
    exit(EXIT_FAILURE);
}
Check for EOF:

When reading from a file, check for EOF to ensure the end of the file is not reached prematurely.
