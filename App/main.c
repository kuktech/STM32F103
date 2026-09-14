#include "main.h"

static void threadMain(void const *argument);

int main(void)
{
  hwInit();
  apInit();

  apMain();
  return 0;
}

