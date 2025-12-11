#include <stdio.h>
#include "todo.h"

int main() {
  Todo test_task; 
  test_task.task = "irgendwas";
  test_task.done = false;
  printf("task: %s\n", test_task.task);

  Todo_List todo_list;
  todo_list.todos[0] = test_task;
  printf("todos: %s\n", todo_list.todos[0].task);
  return 0;
}
