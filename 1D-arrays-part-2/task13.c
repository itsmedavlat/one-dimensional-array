#include <stdio.h>

int main()
{

    int nums[] = {-2, 42, 56, 88, 91, 0, -7, 35, 22, 16, 8};

    int elementNum = sizeof(nums) / sizeof(int);
        printf("Jami %d - ta element bor.\n ", elementNum);
        printf("7ga bo'linadigan sonlar :");

        for (int i = 0; i < elementNum; i++){
            if (nums[i] % 7 == 0 && nums[i] != 0)
                printf("%d,", nums[i]);
        }

    return 0;
}