#include <stdio.h>

int main(){

    FILE * inputs;
    inputs = fopen("inputs.txt", "r");

    if (inputs == NULL){
        fprintf(stderr, "Error opening file!\n");
        return 501;
    }

    printf("File opened successfully!\n");

    return 0;
}