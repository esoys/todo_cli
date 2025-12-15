#include <stdio.h>
#include <stdlib.h>
#include "todo.h"
#include "files.h"

/*zum compiliern header mit einbeziehen
  -> gcc main.c todo.c -o main
*/

typedef enum Action {
    CREATE = 1,
    VIEW,
    CHECK,
    DELETE,
} action_t;



int main() {
    action_t action;
    printf("Gewünschte Operation wählen:\n[1] Neuer Todo\n[2] Todo ansehen\n[3] Als erledigt markiern\n[4] Todo löschen\n");
    scanf("%d", &action);
    
    switch (action) {
        case CREATE:
            printf("Titel eingeben: ");
            char title[20];
            fgets(title, sizeof(title), stdin);

            //clear input buffer
            while(getchar() != '\n' && getchar() != EOF);

            printf("Task eingeben: ");
            char task[200];
            fgets(task, sizeof(task), stdin);

            todo_t new_todo = create_todo(title, task, 1);
            printf("Neues Todo:\n");
            printf("- title: %s\n", new_todo.title);
            printf("- task: %s\n", new_todo.task);
            printf("- id: %d\n", new_todo.id);
            printf("- done: %s\n", new_todo.done ? "true" : "false");

            new_save_file(new_todo);
            break;

        case DELETE:
            printf("ID des zu löschenden Todos eingeben: \n");
            int id;
            scanf("%d", &id);
            delete_save_file(id);
            break;
    }
    return 0;
}
