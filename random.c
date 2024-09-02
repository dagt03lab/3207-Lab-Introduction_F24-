#include <stdlib.h>
#include <time.h>

char randchar() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 0 and 25
    int random_num = rand() % 26;

    // Convert the random number to a character between 'A' and 'Z'
    return 'A' + random_num;


    
}