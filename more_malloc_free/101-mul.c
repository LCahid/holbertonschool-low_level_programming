#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv) {
    int size;
    char *data;
    size_t bytes_written;
    FILE *file = fopen("cahid.sh", "w");

    if (argc < 3)
	    return 1;
    if (file == NULL) {
        fprintf(stderr, "Error opening the file.\n");
        return 1; // Return an error code
    }

    size = strlen(argv[1]) + strlen(argv[2]);
    data = malloc(size + 50);
    sprintf(data, "#!/bin/bash\necho \"a = %s; b= %s; a*b;\" | bc", argv[1], argv[2]); 

    bytes_written = fwrite(data, 1, strlen(data), file);

    if (bytes_written != strlen(data)) {
        fprintf(stderr, "Error writing to the file.\n");
        fclose(file);
        return 1; // Return an error code
    }

    // Close the file
    fclose(file);
    free(data);
    system("chmod u+x cahid.sh");
    system("./cahid.sh | tr -d '\\\n'");

    return 0; // Return 0 for successful execution
}

