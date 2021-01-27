#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
      uint * nullp = (uint*)0;
      printf(1, "null dereference: ");
      printf(1, "%x %x\n", nullp, *nullp);
      printf(1, "TEST PASSED\n");
      exit();
}
