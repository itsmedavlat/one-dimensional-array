#include <stdio.h>

int main(){

    int nums[] = {-2, 42, 56, 88, 91, 0, -7, 35, 22, 16, 8};

    int elementNum = sizeof(nums) / sizeof(int);
    printf("Jami %d - ta element bor.\n", elementNum);

    int max = nums[0];
    int min = nums[0];

    for (int i = 0; i < elementNum; i++){
        if (max < nums[i])
            max = nums[i];
        else if (min > nums[i])
            min = nums[i];
    }
    printf("Eng kattasi: %d\n", max); 
    printf("Eng kichigi: %d\n" , min);
        
    return 0;
}