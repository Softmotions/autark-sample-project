#include "hello.h"
#include "utils.h"

int main(void) {
  const char *msg = hello_get_msg();
  utils_print(msg);
  return 0;
}
