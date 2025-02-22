// Fix the below program - find the problem(s) and fix them
// The message Hello World (the message variable) needs to be in an array of Messages 20 times, but memory should be reallocated after there are 10 items are in the array, as 10 items is the initial memory allocation for the array

// NOTE: confused about the reallocation part. i'm assuming i have to allocate an array of size 10
// first and then reallocate once its full? might want to reword for clarity

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* value;
} Message;

int main() {
    Message* m;
    char* message = "Hello World";

    m = calloc(10, sizeof(Message));

    for (int i = 0; i < 20; ++i) {
        if (i == 10) {
            m = reallocarray(m, 20, sizeof(Message));
            printf("Reallocated to size of 20.\n");

            if (m == NULL) {
                printf("Memory reallocation failed\n");
                return 1;
            }
        }

        m[i].value = message;
        printf("%s\n", m[i].value);
    }

    // Free memory here
    free(m);

    return 0;
}
