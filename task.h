#ifndef TASK_H
# define TASK_H

/* 1 */
enum STATUS{TODO, PENDING, DONE};

#define MAX_TITLE_SIZE 2048

struct Task {
  int id;
  char* title;
  enum STATUS status;
};

/*
 * Make a function that will take both parametera and return a newly created
 */
struct Task* create_task(int id, char* title);

/*
 * If you ever create a function that allocates a struct you should
 * immediatly make the function that frees it too (even if its not on the
 * subject)
 */
void destroy_task(struct Task* task);

/*
 * Not mandatory to implement but it will make your print_a_task cleaner
 */
void print_a_status(enum STATUS statval);

/*
 * Write a function that will print the task in this format :
 * <id>: <title> [<status>]$
 */
void print_a_task(struct Task* task);

#endif
