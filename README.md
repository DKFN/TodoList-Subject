# Todo List

Todo List aims to be a little project that will cover essential parts of the
C language.

It is not expected to finish the whole subject but try to get as much as you can.

As you only have few days before starting a real project, we provide you a unit test suite so you can quicly check your work.

Here are some tips to start your project well:

	- Keep your memory sane, not doing so might create unexpected behaviors 	  and your program might not be stable, use valgrind and ask for help

	- Keep your code clean, and follow EPITA coding style from the assistants, it will be a key factor when working in groups.

	- If you do not remember how to use GDB we can help you get started again but please debug your program before calling us after that.

	- Have fun ! :)


1/ A Task
Notions:
	- Memory allocation
	- Structs manipulation
	- Enumerations	

Your goal is to be able to create a Task

Look at the "task.h" header file, you have 4 functions to make:

First, this function should allocate a Task on the heap and then fill its 
proprieties with the given parameters
```c
struct Task* create_task(int id, char* title);
```

Whenever you allocate a complex structure on the Heap, you should think of a 
strategy to free so the next step is the detroy function:
```c
void destroy_task(struct Task* task);
```

Finally, the last task of this chapter is to create a printing function as such:
```c
void print_a_task(struct Task* task);
```

You can use test1.c like this to check that your work is corect (just replace
 ref1 by your filename)
 ```
➜  TodoList gcc test1.c ref1.c -o ref1
➜  TodoList ./ref1 | cat -e           
1: Become a light butterfly [TODO]$
2: Be under the projectors [TODO]$
➜  TodoList 
```

2/ Many tasks
Notions
	- Memory allocations
	- Pointers
	- Linked List
	
Now that you can create a task you will need to create a linked list to store
 all your tasks.
 
 To do so you have two struct to fill :
 ```c

/**
 * It will be the list containing all the tasks
 * I suggest you keep the pointer of the first element here
 */
struct TaskList {
  // TODO : Implement
};

/**
 * A node is an element of the list, it has the reference to the next element
 * an the task
 */
struct TaskListNode {
  // TODO : Implement
};
```

And the functions to create and free theses:
```c
// Inits a note structure containg a Task
struct TaskListNode* init_node(struct Task* task);

// Creates a list and returns its pointer
struct TaskList* init_list();

// Destroys a node
void free_node(struct TaskListNode* tln) {

// Destroy the list and all its elements
void destroy_list(struct TaskList *tl);
```

Now, you need to add Tasks to your list:
```c
/*
 * Write a function that appends a task to the list.
 */
void push_task(struct TaskList *tl, struct Task *task);


```

Last but not least print all the tasks contained on the list :
```c
// Prints all the tasks from the list
void print_all_tasks(struct TaskList* tl);
```

You can test your work with the test2.c file, compile it with all your 
project files and you shoudl have this output :
```bash
➜  TodoList git:(master) ✗ gcc ref1.c ref2.c test2.c -o test2 ; ./test2 | cat -e
1: Become a light butterfly [TODO]$
2: Be under the projectors [TODO]$
c
```

 

3/ Changing status of tasks
Notions
	- Enumerations
	- List operations (find, get, remove, push, pop)

4/ Saving and loading the list
Notions
	- File manipulation
	- Parsing files

5/ TodoCLI
Notions
	- Handling user input
	- Parsing of command line
