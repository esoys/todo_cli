#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "files.h"


void new_save_file(todo_t todo) {
    FILE *save_file;
    char *path;
    asprintf(&path, "todo_save_files/%d.txt", todo.id); 
    save_file = fopen(path, "w");

    int file_create = fprintf(save_file, "*--%s\n-*-%s\n--*false", todo.title, todo.task);
  
    if (file_create < 0) {
        printf("An Error has occured. Couldn't write to file.\n");
    } else {
        printf("File saved.\n");
    }
  
    fclose(save_file);
    free(path);
}


void delete_save_file(int id) {
    char *file;
    asprintf(&file, "todo_save_files/%d.txt", id);

    if (remove(file) == 0) {
        printf("Save file deleted.\n");
    } else {
        printf("Error: Unable to delete file.\n");
    }
}   
