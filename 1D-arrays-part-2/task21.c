#include <stdio.h>

int main(){

    int nums[] = {-2, 42, 56, 88, 91, 0, -7, 35, 22, 16, 8};

    int elementNum = sizeof(nums) / sizeof(int);
    printf("Jami %d - ta element bor.\n", elementNum);

    int max = nums[0];
    int max2 = nums[0];
    for (int i = 0; i < elementNum; i++){
        if (max < nums[i]){
            max2 = max;
            max = nums[i];
        } else if (max2 < nums[i] && nums[i] != max)
            max2 = nums[i];
    }
    printf("Birinchi Eng katta son : %d \n", max); 
    printf("Ikkinchi Eng katta son : %d \n" , max2);

    return 0;
}