//7.1 oukaa 字符串反转
#include <stdio.h>
#include <string.h> // 主要用于测试时的 strlen

/**
 * @brief 辅助函数：反转从 start 到 end 的字符串部分
 *
 * @param start 指向要反转部分的起始字符的指针
 * @param end   指向要反转部分的结束字符的指针
 */
void reverse(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

/**
 * @brief 将字符串中的每个单词逐个翻转 (C语言实现)
 *
 * 该函数采用原地操作，不产生新的字符串。
 * 它能正确处理各种边界情况，如多个空格、首尾空格等。
 *
 * @param s 一个以 null 结尾的字符数组
 */
void reverseWords(char* s) {
    // 边界检查：处理 NULL 指针
    if (s == NULL) {
        return;
    }

    char* i = s;          // 主遍历指针
    char* word_start = s; // 当前单词的起始位置

    while (*i) { // 循环直到字符串结尾 ('\\0')
        // 1. 找到单词的起始位置
        // 跳过单词前的所有空格
        while (*i && *i == ' ') {
            i++;
        }

        // 如果跳过空格后已经到达末尾，则结束
        if (!*i) {
            break;
        }

        // 2. 找到单词的结束位置
        // `word_start` 记录了当前单词的起始指针
        word_start = i;
        // 继续移动 `i` 指针直到找到单词的结尾 (空格或 '\\0')
        while (*i && *i != ' ') {
            i++;
        }

        // 3. 反转当前单词
        // 单词的范围是 [word_start, i-1]
        reverse(word_start, i - 1);
    }
}


// ---- 主函数用于测试 ----
int main() {
    // 注意：测试字符串必须是字符数组，而不是 char* 指向的字符串字面量
    // 因为字符串字面量通常存储在只读内存区，不能被修改。

    char test1[] = "Hello World CVTE";
    printf("Original:  %s\n", test1);
    reverseWords(test1);
    printf("Reversed:  %s\n", test1);
    printf("Expected:   olleH dlroW ETCV\n");
    printf("------------------------------------\n");

    char test2[] = "  leading spaces   and trailing spaces  ";
    printf("Original:  %s\n", test2);
    reverseWords(test2);
    printf("Reversed:  %s\n", test2);
    printf("Expected:    gnidael secaps   dna gniliart secaps  \n");
    printf("------------------------------------\n");

    char test3[] = "OneWord";
    printf("Original:  %s\n", test3);
    reverseWords(test3);
    printf("Reversed:  %s\n", test3);
    printf("Expected:  droWeno\n");
    printf("------------------------------------\n");

    char test4[] = "";
    printf("Original:  %s\n", test4);
    reverseWords(test4);
    printf("Reversed:  %s\n", test4);
    printf("Expected:  \n");
    printf("------------------------------------\n");

    char test5[] = "   ";
    printf("Original:  %s\n", test5);
    reverseWords(test5);
    printf("Reversed:  %s\n", test5);
    printf("Expected:     \n");
    printf("------------------------------------\n");

    return 0;
}
