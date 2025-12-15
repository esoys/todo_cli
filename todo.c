#include "todo.h"

todo_t create_todo(char *title, char *task, int id) {
    todo_t new_todo = {
        .title = title,
        .task = task,
        .id = id,
        .done = false,
    };
    return new_todo;
}
