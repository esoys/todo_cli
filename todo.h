#ifndef TODO_H
#define TODO_H

struct Todo {
  char *task;
  bool done;
} typedef Todo;


struct Todo_List {
  int len;
  Todo todos[];
} typedef Todo_List;

Todo_List create_todo_list(Todo[], int);

#endif
