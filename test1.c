#include <stdio.h>
#include "task.h"

int main() {
  struct Task* t1 = create_task(1, "Become a light butterfly");
  struct Task* t2 = create_task(2, "Be under the projectors");

  print_a_task(t1);
  print_a_task(t2);
  destroy_task(t1);
  destroy_task(t2);

  return 0;
}