#include <stdio.h>

int main(){
    int nums[] = {-2, 42, 56, 88, 91, 0,-7, 35, 22, 16, 8};
    int length = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < length -1; i++){
        for(int i = 0; i < length - 1; i++){
            if(nums[i] > nums[i+1]){
                int temp;

                temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }
    }

    for(int i = 0; i < length; i++)
        printf("%d ", nums[i]);

    return 0;
}