#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct NumNode {
    int64_t number;
    struct NumNode *next;
} NumberNode;

NumberNode *head = NULL;

/*
 * Функция вставляет value заначение (узер) в правильное место связанного списка
 */
void insert_node(int64_t value);

int main(void)
{
    NumberNode *current = NULL;
    NumberNode *next = NULL;

    int32_t test_list[] = {8, 3, 2, 6, 1, 5, 4, 2, 5, 3, 7, 3, 23, 0, 56, -234, 6, -2, 6, 2, -5, 3};
    size_t i;

    // insert_node(100);
    // printf("head.number = %" PRId64 "\n", head->number);
    // insert_node(-234);
    // printf("head.next.number = %" PRId64 "\n", head->next->number);
    // insert_node(89124);
    // printf("head.next.next.number = %" PRId64 "\n", head->next->next->number);

    for (i = 0; i < 22; ++i) {
        insert_node(test_list[i]);
    }

    puts("  До\tПосле");

    i = 0;
    while (head->next != NULL) {
        printf("%4d\t%5" PRId64 "\n", test_list[i++], head->number);
        head = head->next;
    }

    // очищаем список
    for (current = head; current != NULL; current = next) {
        next = current->next, free(current);
    }

    return EXIT_SUCCESS;
}

void insert_node(int64_t value)
{
    NumberNode *temp = NULL;
    NumberNode *one = NULL;
    NumberNode *two = NULL;

    // инициализация
    if (head == NULL) {
        head = (NumberNode *)malloc(sizeof(NumberNode));
        head->next = NULL;
    }

    // первый элемент - голова, второй - следующий элемент.
    one = head;
    two = head->next;

    // временный узел
    temp = (NumberNode *)malloc(sizeof(NumberNode));
    temp->number = value;

    while (two != NULL && temp->number > two->number) {
        one = one->next;
        two = two->next;
    }

    one->next = temp;
    temp->next = two;
}
