Opening a file

     You can use the fopen( ) function to create a new file or to open an existing file, this call will initialize an object of the type FILE, which contains all the information necessary to control the stream. Following is the prototype of this function call:

      FILE *fopen( const char * filename, const char * mode );

 modes
• r - Opens an existing text file for reading purpose.
•w - Opens a text file for writing, if it does not exist then a new file is created. Here your program will start writing content from the beginning of the file.
•a -  Opens a text file for writing in appending mode, if it does not exist then a new file is created. Here your program will start appending content in the existing file       content.


Closing a file

     To close a file, use the fclose( ) function. The prototype of this function is:

     int fclose( FILE *fp );

Writing a file

     Following is the simplest function to write individual characters to a stream:

    int fputc( int c, FILE *fp );

Reading a file

     Following is the simplest function to read a single character from a file:

     int fgetc( FILE * fp );





