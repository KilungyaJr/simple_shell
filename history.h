#ifndef HISTORY_H
#define HISTORY_H
/**
 * struct HistList - singly linked list
 * @cmd: command
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct HistList
{
	char *cmd;
	struct HistList *next;
} HistList;
#endif
