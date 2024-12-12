#include <stdio.h>

int main() {

int first, last, result;
int nums[] = {-8, 2, 5, 6, 1, 447, 55, 24, 26};

    int elementNum = sizeof(nums) / sizeof(int);
        printf("Jami %d - ta element bor.\n ", elementNum); 
            first = nums[0]; 
                printf("Eng birinchi element qiymati: %d \n",first);
            last = nums[elementNum - 1]; 
                printf("Eng oxirgi element qiymati: %d \n",last);
            
                result = first + last;
                printf(" Yig`indi : %d",result);
    return 0;
}