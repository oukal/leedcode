/*206.反转链表
力扣题目链接(opens new window)

题意：反转一个单链表。

示例: 输入: 1->2->3->4->5->NULL 输出: 5->4->3->2->1->NULL
*/

#include <stdio.h>
#include <stdlib.h>
// 定义	一个单链表
struct ListNode {
    int val;     
    struct ListNode *next;  //指向下一个链表的指针
};

// 反转函数
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// 创建新节点
struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

// 打印链表
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}
//主函数
int main() {
    // Create a sample linked list: 1->2->3->4->5->NULL
    struct ListNode* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Original list: ");
    printList(head);

    // Reverse the linked list
    head = reverseList(head);

    printf("Reversed list: ");
    printList(head);

    return 0;
}
