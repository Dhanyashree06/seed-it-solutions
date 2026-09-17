/**
 * Problem: Q0.143 - Basic_Level_0_Arrays_1
 * Category: General
 * Difficulty: Medium
 * Platform: SEED-IT Platform (https://seed-it.com)
 * Date Solved: 2026-09-17
 * Language: c
 * Test Cases: 30 / 30 Passed (100%)
 */

#include <stdio.h>

int main() {
    int n;
    if(scanf("%d", &n)!=1){
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i<n-1){
            printf(" ");
        }   
    }
    printf("\n");
    return 0;
}
