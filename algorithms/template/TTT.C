
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Func1(int* nums, int numsSize)
{
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    int* ans = (int*)malloc(sizeof(int) * numsSize);
    ans[0] = 1;
    ans[1] = 2;
    ans[2] = 3;
    return 0;
}

void test1()
{
    int numsSize = 3;
    int nums[] = {1, 2, 3, 1, 1, 3};
    int ret = Func1(nums, numsSize);
}

int* Func2(int* returnSize)
{
    int numsSize = 2;
    if (numsSize == 0) {
        *returnSize = 0;  // 千万别忘记，否则运行出错
        return NULL;
    }
    int* result = (int*)malloc(sizeof(int) * numsSize);
    result[0] = 1;
    result[1] = 2;
    *returnSize = numsSize;
    return result;
}

void test2()
{
    int returnSize;
    int* ret = Func2(&returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ret[i]);
    }
    printf("\n");
}

// 函数输入二维数组
int Func3(int** nums, int numsSize, int* numsColSize)
{
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsColSize[i]; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 调用点
void test3()
{
    int numsSize = 3;
    int** nums = (int**)malloc(sizeof(int*) * numsSize);
    nums[0] = (int*)malloc(sizeof(int) * 1);
    nums[0][0] = 1;
    nums[1] = (int*)malloc(sizeof(int) * 2);
    nums[1][0] = 2;
    nums[1][1] = 3;
    nums[2] = NULL;
    int numsColSize[] = {1, 2, 0};
    int ret = Func3(nums, numsSize, numsColSize);
}

int** Func4(int* returnSize, int** returnColSize)
{
    int numsSize = 2;
    if (numsSize == 0) {
        *returnSize = 0;  // 千万别忘记，否则运行出错
        return NULL;
    }
    int numsColSize[] = {1, 2};
    int** result = (int**)malloc(sizeof(int*) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        result[i] = (int*)malloc(sizeof(int) * numsColSize[i]);
        for (int j = 0; j < numsColSize[i]; j++) {
            result[i][j] = j;
        }
    }
    *returnSize = numsSize;
    returnColSize[0] = (int*)malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++) {
        returnColSize[0][i] = numsColSize[i];
    }
    return result;
}

// 调用点
void test4()
{
    int returnSize;
    int* returnColSize = NULL;
    int** ret = Func4(&returnSize, &returnColSize);
    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < returnColSize[i]; j++) {
            printf("%d ", ret[i][j]);
        }
        printf("\n");
    }
}

char* Func5(char* s, int n)
{
    printf("s:%s\n", s);
    char* ans = {""};
    return ans;
}

void test5()
{
    char* s = {"abcdefg"};
    int k = 2;
    char* ret = Func5(s, k);
    printf("ret:%s\n", ret);
}

char* Func6(char** strs, int strsSize)
{
    char* ret = (char*)malloc(sizeof(char) * strsSize + 1);
    ret[1] = '\0';
    return ret;
}

void test6()
{
    char* ret = (char*)malloc(sizeof(char) * 100);
    char* strs[] = {"flower", "flow", "flight"};
    ret = Func6(strs, 3);
}

int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}
