#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv) {
    // Open a file for writing (creates a new file or truncates an existing one)
    FILE *file = fopen("cahid.sh", "w");

    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1; // Return an error code
    }

    int size = strlen(argv[1]) + strlen(argv[2]);
    char *data = malloc(size + 50);
    sprintf(data, "#!/bin/bash\necho \"a = %s; b= %s; a*b;\" | bc", argv[1], argv[2]); 

    // Write the data to the file
    size_t bytes_written = fwrite(data, 1, strlen(data), file);

    // Check if the write operation was successful
    if (bytes_written != strlen(data)) {
        fprintf(stderr, "Error writing to the file.\n");
        fclose(file); // Close the file before exiting
        return 1; // Return an error code
    }

    // Close the file
    fclose(file);
    free(data);
    system("chmod u+x cahid.sh");
    system("./cahid.sh | tr -d '\\\n'");

    return 0; // Return 0 for successful execution
}

