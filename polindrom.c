#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    const char *input = "racecar";
    
    if (Palindrome(input)) {
        printf("Input: %s Output: true\n", input);
    } else {
        printf("Input: %s Output: false\n", input);
    }

    return 0;
}
