#include <stdio.h>
#include <string.h>

int lcsLength(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int dp[len1 + 1][len2 + 1];
    
    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0; 
            } else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1]; 
            }
        }
    }

    return dp[len1][len2];
}

int main() {
    const char *str1 = "algorithm";
    const char *str2 = "rhythm";

    int length = lcsLength(str1, str2);
    printf("Length of the LCS: %d\n", length);

    return 0;
}

