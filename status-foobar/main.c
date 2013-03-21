#include <stdio.h>
#include "battery_status.h"

main()
{
  printf("%.2f\n", battery_status());

  return 0;
}
