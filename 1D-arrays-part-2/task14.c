#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_random_array(int numbers[], int length){
    int random_number;
    srand(time(0));

    for (int i = 0; i < 500; i++)
    {
        random_number = rand() % 100;
        numbers[i] = random_number;
    }
}

int max_array(int numbers[], int length){
    int max = numbers[0];

    for (int i = 0; i < 500; i++)
        if (max < numbers[i])
            max = numbers[i];
    return max;
}

int main(){
    int numbers[500];

    fill_random_array(numbers, 500);
    for (int i = 0; i < 500; i++)
    {
        printf("%d-index: %d\n", i, numbers[i]);
    }

    printf("Eng katta element: %d\n", max_array(numbers, 500));
    return 0;
}