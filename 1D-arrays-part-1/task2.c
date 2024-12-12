#include <stdio.h>

int main() {
 int nums[9] = {5, 8, 4, 7, 2, 3, 9, 0, 0};
 nums[2] = 100;

 for(int i = 0; i < 9; i++){

    printf("%d,", nums[i]);
 }
    return 0;
}