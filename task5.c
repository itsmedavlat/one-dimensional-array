#include <stdio.h>

int main() {
int nums[8] = {5,-4, 34, 60 , 54,-77, 80,-92};
int total = 0;

    for (int i = 0; i < 8; i++){
        total += nums[i];
    }
        printf("%d", total);
 
    return 0;
}