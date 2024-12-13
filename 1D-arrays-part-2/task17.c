#include <stdio.h>

int main(){
 int nums[] = {-2, 42, 56, 88, 91, 0,-7, 35, 22, 16, 8};
    float total = 0;

    int elementNum = sizeof(nums) / sizeof(int);
        for (int i = 0; i < elementNum; i++){
            total += nums[i];
        }
        float average = total / elementNum;
            printf("O`rtacha : %.2f", average);
        return 0;
}