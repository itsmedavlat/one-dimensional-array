#include <stdio.h>

int main() {
int last;
int nums[] = {45,-4, 0, 35, 22,-7};

    /* bu yerda biz birinchi arraylar sonini aniqlaymiz */

    int elementNum = sizeof(nums) / sizeof(int);
        printf("Jami %d - ta element bor.\n ", elementNum); // nechta element borligni topdik.
            
            last = nums[elementNum - 1]; 
                printf("Eng oxirgi element qiymati: %d",last);
    
    return 0;
}