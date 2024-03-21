#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#define MAX_TASKS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int priority;
    int due_date;
    int completed;
} Task;

void add_task(char* name, int priority, int due_date);
void remove_task(char* name);
void modify_task(char* name, int priority, int due_date);
void mark_task_completed(char* name);
void display_tasks();

#endif
