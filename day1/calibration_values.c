#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    FILE * fPtr;
    fPtr = fopen("inputs.txt", "r");

    if (fPtr == NULL){
        fprintf(stderr, "Error opening file!\n");
        return 501;
    }

    char input_string[1000];
    int first_digit[1001];
    int last_digit[1000];
    int sum[1000];
    int line_count =1;

    while(!feof(fPtr)){
        fgets(input_string, 1000, fPtr);

        int length = strlen(input_string);
        char tmp;
        int j;
        //Finds value for the first digit
        for (int i=0; i<length; i++){
            if(isdigit(input_string[i])){
                first_digit[line_count] = input_string[i] - '0';
                first_digit[line_count] = first_digit[line_count] * 10; //This is to format the first digit in the correct order with last digit.
                break;
            }
        }
        //Reverses the string.
        for(int i=0, j = length - 1; i < j; i++, j--){
            tmp = input_string[i];
            input_string[i] = input_string[j];
            input_string[j] = tmp;
        }
        //Finds the value of the last digit.
        for (int i=0; i<length; i++){
            if(isdigit(input_string[i])){
                last_digit[line_count] = input_string[i] - '0';
                break;
            }
        }
        //Adds the first digit to the last digit, to get a complete number
        sum[line_count] = first_digit[line_count] + last_digit[line_count];

        line_count++;
    }

    int total_sum = 0;

    for(int i = 0; i< 1001; i++){
        total_sum += sum[i];
    }

    printf("Total: %d", total_sum);

    return 0;
}