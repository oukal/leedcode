/*
尝试打断点：在你的 hello.c 代码的 printf 那一行的行号左边，用鼠标点一下，会出现一个红点。这就是断点。再次按下 F5，你会发现程序会运行到这一行然后停下来。这时你可以查看变量的值，单步执行代码，体验真正的“调试”功能。
设置 externalConsole 为 true：如果你更喜欢程序在一个独立的黑色命令行窗口里运行（这样输入输出更清晰，尤其是有 scanf 的时候），可以去 launch.json 里把 "externalConsole" 的值改成 true。
开始你的编程之旅：你可以放心地开始写代码了！无论是创建新的 .c 文件，还是在子文件夹里组织你的项目，只要你保持 tasks.json 和 launch.json 的配置不变，按下 F5 就能自动编译和运行当前打开的文件。
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2025-07-01 11:01:16
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2025-07-01 12:13:27
 * @FilePath: \codethink_leetcode\leed\hello.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
int main()
{
    printf("hello world");
    return 0;
}