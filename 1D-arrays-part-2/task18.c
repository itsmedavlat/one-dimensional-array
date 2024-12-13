#include <stdio.h>

void input_array(int numbers[], int length) {
    printf("Arrayga %d ta element kiriting :\n", length);
    for (int i = 0; i < length; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

int main() {
    int numbers[10];
    int n, count = 0;

    input_array(numbers, 10);

    printf("Mavjud elementlar: ");
    for (int i = 0; i < 10; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("\n");

    printf("Nechi soni qidirayapsiz? ");
    scanf("%d", &n);
    
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == n) {
            count++;
        }
    }
    printf("%d raqami berilgan arrayda %d marta keldi.\n", n, count);

    return 0;
}
