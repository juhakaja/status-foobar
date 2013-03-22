#include <stdio.h>
#include <string.h>
#include "battery_status.h"
#include "host.h"

main()
{
  char hostname[10];
  host(hostname);

  printf("%s | %.2f\n", hostname, battery_status());

  return 0;
}
