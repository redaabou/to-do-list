#include <stdio.h>
#include <string.h>
#include "task_manager.h"

Task tasks[MAX_TASKS];
int num_tasks = 0;

void add_task(char* name, int priority, int due_date) {
    strcpy(tasks[num_tasks].name, name);
    tasks[num_tasks].priority = priority;
    tasks[num_tasks].due_date = due_date;
    tasks[num_tasks].completed = 0;
    num_tasks++;
}

void remove_task(char* name) {
    int i;
    for (i = 0; i < num_tasks; i++) {
        if (strcmp(tasks[i].name, name) == 0) {
            memmove(&tasks[i], &tasks[i + 1], (num_tasks - i - 1) * sizeof(Task));
            num_tasks--;
            return;
        }
    }
}

void modify_task(char* name, int priority, int due_date) {
    int i;
    for (i = 0; i < num_tasks; i++) {
        if (strcmp(tasks[i].name, name) == 0) {
            tasks[i].priority = priority;
            tasks[i].due_date = due_date;
            return;
        }
    }
}

void mark_task_completed(char* name) {
    int i;
    for (i = 0; i < num_tasks; i++) {
        if (strcmp(tasks[i].name, name) == 0) {
            tasks[i].completed = 1;
            return;
        }
    }
}

void display_tasks() {
    int i;
    for (i = 0; i < num_tasks; i++) {
        printf("Name: %s, Priority: %d, Due Date: %d, Completed: %d\n", tasks[i].name, tasks[i].priority, tasks[i].due_date, tasks[i].completed);
    }
}
