//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Status {SUCCESS = 10, FAILURE, TIMEOUT};

int main() {
    enum Status s;

    for(s = SUCCESS; s <= TIMEOUT; s++) {
        if(s == SUCCESS)
            printf("SUCCESS = %d\n", s);
        else if(s == FAILURE)
            printf("FAILURE = %d\n", s);
        else if(s == TIMEOUT)
            printf("TIMEOUT = %d\n", s);
    }

    return 0;
}