#include <stdio.h>
#include <stdlib.h>
#include "todo.h"


int main() {

  Todo test = create_todo("Foo, Bar, Baz", 1);
  printf("test todo task: %s\n", test.task);
  printf("test todo id: %d\n", test.id);
  printf("test todo id: %s\n", test.done ? "true" : "false");

  return 0;
}
