#ifndef TODO_H
#define TODO_H

struct Todo {
  char *task;
  bool done;
} typedef Todo;


struct Todo_List {
  Todo *todos;
} typedef Todo_List;

#endif
