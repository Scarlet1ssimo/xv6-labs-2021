#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc >= 1) {
    sleep(atoi(argv[1]));
    exit(0);
  }
  printf("sleep: must specify the number of ticks");
  exit(1);
}