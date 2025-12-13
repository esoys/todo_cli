#include "todo.h"

Todo create_todo(char *task, int id) {
  Todo new_todo = {
    .task = task,
    .id = id,
    .done = false,
  };
  return new_todo;
}
