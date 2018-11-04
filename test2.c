#include <stdio.h>
#include "task.h"
#include "tasklist.h"

int main() {
  struct TaskList* tl = init_list();
  struct Task* t1 = create_task(1, "Become a light butterfly");
  struct Task* t2 = create_task(2, "Be under the projectors");
  push_task(tl, t1);
  push_task(tl, t2);
  print_all_tasks(tl);
  destroy_list(tl);
  return 0;
}
