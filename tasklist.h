#ifndef TASKLIST_H
# define TASKLIST_H

/* 2 */

struct TaskList {
};

struct TaskListNode {
};

/*
 * Inits a node structure with the task given in parameter, containing the
 * task and the reference to the next node
 */
struct TaskListNode* init_node(struct Task* task);

/*
 * Inits the list containg a reference to the first task of the list of tasks
 */
 struct TaskList* init_list();

/*
 * Must free all the elements of the list and the list
 */
void destroy_list(struct TaskList *tl);

/*
 * Write a function that appends a task to the list.
 */
void push_task(struct TaskList *tl, struct Task *task);

/*
 * Prints all the tasks
 */
void print_all_tasks(struct TaskList* tl);

/* 3 */
/*
 * Write a function that searches for a task, and return an int if it exists:
 * It exists:          0
 * It does not exist: -1
 */
int find_a_task(struct TaskList *tl, int id);

/*
 * Write a function that returns a task using its id.
 */
struct Task* get_task(struct TaskList *tl, int id);

/*
 * Write a function that removes a task using its id.
 */
void remove_task(struct TaskList *tl, int id);

/*
 * Write a function that remove the first task in the list.
 */
void pop_tasklist(struct TaskList *tl);

/* 4 */
/*
 * Write a function that saves a TaskList to a file.
 * Format :
 *      count
 *      id
 *      title
 *      status
 *      id
 *      title
 *      status
 *      ...
 *      EOF
 */
void save_list(struct TaskList *tl, char *path);

/*
 * Write a function that load a file and creates the TaskList according to the
 * format.
 */
struct TaskList* load_list(char *path);

#endif
