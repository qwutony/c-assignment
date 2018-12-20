#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// initialise the rows and columns integers
const int ROWS = 24;
const int COLUMNS = 16;

int main(int argc, char const *argv[]) {
    
    // open a file (store file handle in target_file)
    FILE *target_file = fopen(argv[1], "r");

    // create somewhere to store file contents
    // character has byte value of between 0 and 255
    unsigned char buffer[ROWS][COLUMNS];

    int num_bytes_read = fread(buffer, 1, ROWS * COLUMNS, target_file);

    while (num_bytes_read != 0) {
        // print entire screenful of file
        for (int row = 0; row < ROWS; row++) {
            // print row in hexadecimal
            for (int col = 0; col < COLUMNS; col++) {

                // writes blanks after end of file
                if (row * COLUMNS + col < num_bytes_read) {
                    printf("%02x ", buffer[row][col]);
                } else {
                    printf("   ");
                }
                if (col == 7) {
                    printf(" ");
                }
            }

            printf(" ");
            // print row in ASCII
            for (int col = 0; col < COLUMNS; col++) {
                if (row * COLUMNS + col < num_bytes_read) {
                    
                    // writes blanks after end of file
                    if (isprint(buffer[row][col])) {
                        printf("%c", buffer[row][col]); // make sure it is printable
                    } else { // otherwise print a dot
                        printf(".");
                    }

                } else {
                    printf("   ");
                }
                
            }
            printf("\n");
        }
        printf("\n");
        getchar();

        // read into buffer from file, pointer will refresh to the next set of characters
        // if they are not equivalent it will read across the memory
        num_bytes_read = fread(buffer, 1, ROWS * COLUMNS, target_file);

    }
    fclose(target_file);

    return 0;
}