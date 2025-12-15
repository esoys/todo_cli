#ifndef TODO_H
#define TODO_H

struct Todo {
    char *task;
    char *title;
    int id;
    bool done;
} typedef todo_t;


struct Todo_List {
    int len;
    todo_t todos[];
} typedef todo_list_t;

todo_t create_todo(char *, char *, int);
todo_list_t create_todo_list(todo_t[], int);

#endif
