#include <stdio.h>

int main(){

    int nums[] = {4,-2,-8, 9,-1, 6, 3,-4, 5, 10};

    int elementNum = sizeof(nums) / sizeof(int);

    for (int i = 0; i < elementNum; i++){
        if (nums[i] <= 0 )
            printf("%d,", 0);
        else    
            printf("%d,", 1); 
    }

    return 0;
}