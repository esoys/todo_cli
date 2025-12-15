#ifndef FILES_H
#define FILES_H
#include "todo.h"


void new_save_file(todo_t);

todo_list_t load_save_files();

void delete_save_file(int);

#endif
