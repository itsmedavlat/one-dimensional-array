#include <stdio.h>

int main() {
int total = 0;

int nums[10];
    for(int i = 1; i <= 10; i++){
        scanf("%d", &nums[i]);
    }
        for(int i = 1; i <= 10; i++){
            if(nums[i] % 2 == 0 )
            total += nums[i];
        }
            printf("%d", total);

    return 0;
}