#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

int main() {
    int bytes_read, TC, i, size, count;
    size_t nbytes = BUFFER_SIZE, asize;

    char* my_string = (char*) malloc (BUFFER_SIZE + 1);
    char* simon =  (char*) malloc (BUFFER_SIZE / 2);
    char* query =  (char*) malloc (BUFFER_SIZE / 2);

    getline(&my_string, &nbytes, stdin);
    sscanf(my_string, "%d", &TC);

    while(TC--) {
        getline(&my_string, &nbytes, stdin);
        asize = strlen(my_string);

        if(asize > 3) {            
            for(count = 0, i = 0; i < asize && count != 2; i++) {
                char current = *(my_string + i);
                count += (current == ' ') ? 1 : 0;
                *(simon + i) = current;
            }

            *(simon + i - 1) = '\0';

            if(strcmp(simon, "Simon says") == 0 && i--)
                for(; i < asize; i++) printf("%c", *(my_string + i));
        }
    }

    return 0;

}