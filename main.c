#include <stdio.h>
#include "task_manager.h"

int main() {
    int choice, priority, due_date;
    char name[MAX_NAME_LENGTH];

    while (1) {
        printf("\n1. Add task\n2. Remove task\n3. Modify task\n4. Mark task as completed\n5. Display tasks\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task name: ");
                scanf("%s", name);
                printf("Enter task priority: ");
                scanf("%d", &priority);
                printf("Enter task due date (in YYYYMMDD format): ");
                scanf("%d", &due_date);
                add_task(name, priority, due_date);
                break;
            case 2:
                printf("Enter task name: ");
                scanf("%s", name);
                remove_task(name);
                break;
            case 3:
                printf("Enter task name: ");
                scanf("%s", name);
                printf("Enter new task priority: ");
                scanf("%d", &priority);
                printf("Enter new task due date (in YYYYMMDD format): ");
                scanf("%d", &due_date);
                modify_task(name, priority, due_date);
                break;
            case 4:
                printf("Enter task name: ");
                scanf("%s", name);
                mark_task_completed(name);
                break;
            case 5:
                display_tasks();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
