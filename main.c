#include <stdio.h>
#include <stdlib.h>
#include "todo.h"

int main() {
  Todo test_task; 
  test_task.task = "irgendwas";
  test_task.done = false;
  printf("task: %s\n", test_task.task);

  Todo todos[3];
  todos[0] = test_task;
  printf("list item 1: %s\n", todos[0].task);

  Todo_List *todo_list;

  Todo_List *create_task_list(Todo todo, int len) {
    Todo_List *new_list = malloc(sizeof(new_list) + len * sizeof(int));
    new_list->todos[0] = todo;
    return new_list;
  }
  
  Todo_List *list = create_task_list(test_task, 1);


  printf("structed List: %s\n", list->todos[0].task);
  return 0;
}
