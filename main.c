#include <stdio.h>
#include "todo.h"

int main() {
  Todo test_task; 
  test_task.task = "irgendwas";
  test_task.done = false;
  printf("task: %s\n", test_task.task);

  Todo todos[3];
  todos[0] = test_task;
  printf("list item 1: %s\n", todos[0].task);
  return 0;
}
