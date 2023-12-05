#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"


int main(){

    FILE* fPtr;
    //fPtr = fopen("inputs.txt", "r");
    fPtr = fopen("example.txt", "r");

    if(fPtr == NULL){
        fprintf(stderr, "Error, opening file.\n");
    }
    
    char input_string[1000];
    int first_digit[1001];
    int line_count = 1;

    while(!feof(fPtr)){
        fgets(input_string, 1000, fPtr);

        first_digit[line_count] = 0;

        int length = strlen(input_string);

        if(isdigit(input_string[0])){
            first_digit[line_count] = input_string[0] -'0';
            first_digit[line_count] = first_digit[line_count] * 10;
            line_count++;
            continue;
        }
        if(isOne(input_string, length) == 10){
            first_digit[line_count] = 10;
            line_count++;
            continue;
        } else if (isTwo(input_string, length) == 20){
            first_digit[line_count] = 20;
            line_count++;
            continue;
        } else if (isThree(input_string, length) == 30){
            first_digit[line_count] = 30;
            line_count++;
            continue;
        } else if (isFour(input_string, length) == 40){
            first_digit[line_count] = 40;
            line_count++;
            continue;
        } else if (isFive(input_string, length) == 50){
            first_digit[line_count] = 50;
            line_count++;
            continue;
        } else if (isSix(input_string, length) == 60){
            first_digit[line_count] = 60;
            line_count++;
            continue;
        } else if (isSeven(input_string, length) == 70){
            first_digit[line_count] = 70;
            line_count++;
            continue;
        } else if (isEight(input_string, length) == 80){
            first_digit[line_count] = 80;
            line_count++;
            continue;
        } else if (isNine(input_string, length) == 90){
            first_digit[line_count] = 90;
            line_count++;
            continue;
        }

        // for(int i=0; i <length; i++){
        //     if(input_string[i] == 'o'){
        //         if(input_string[i+1] == 'n'){
        //             if(input_string[i+2] == '2'){
        //                 first_digit[line_count] = 10;
        //                 break;
        //             }
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }

        for (int i=0; i<length; i++){
            if(isdigit(input_string[i])){
                first_digit[line_count] = input_string[i] - '0';
                first_digit[line_count] = first_digit[line_count] * 10; //This is to format the first digit in the correct order with last digit.
                break;
            }
        }

        line_count++;
    }

    for(int i=1; i < line_count; i++){
        printf("First Value: %d\n", first_digit[i]);
    }

    return 0;
}