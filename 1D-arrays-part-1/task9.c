#include <stdio.h>

int main() {
int n;
int negative_numbers = 0;
printf("Nechta elementli array kerak ? "); scanf("%d", &n);

int nums[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &nums[i]);
    }
        for(int i = 1; i <= 10; i++){
            if(nums[i] < 0)
            negative_numbers ++;
        }
            printf("Jami %d - ta minus raqamlar bor", negative_numbers);

    return 0;
}