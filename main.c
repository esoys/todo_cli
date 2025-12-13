#include <stdio.h>
#include <stdlib.h>
#include "todo.h"

/*zum compiliern header mit einbeziehen
  -> gcc main.c todo.c -o main
*/

int main() {

  printf("Task eingeben: ");
  char task[200];
  fgets(task, sizeof(task), stdin);
  printf("input: %s\n", task);

  Todo test = create_todo(task, 1);
  printf("test todo task: %s\n", test.task);
  printf("test todo id: %d\n", test.id);
  printf("test todo id: %s\n", test.done ? "true" : "false");

  return 0;
}
