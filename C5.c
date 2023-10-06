#include <stdio.h>

int main() {

    int input_array[] = {46, 78, 22, 13, 9, 38};

    int array_length = *(&input_array + 1) - input_array;

    int array_minimum = input_array[0];
    int array_maximum = input_array[0];

    for (int i = 0; i < array_length ; i++){
        if (input_array[i] > array_maximum){
            array_maximum = input_array[i];
        } else if (input_array[i] < array_minimum){
            array_minimum = input_array[i];
        }
    }

    printf("Numbers entered: %d\n",array_length);
    printf("Minimum number is: %d\n",array_minimum);
    printf("Maximum number is: %d\n",array_maximum);

    return 0;
}
