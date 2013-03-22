#include <stdio.h>
#include <string.h>
#include "battery_status.h"
#include "host.h"
#include "datetime.h"

main()
{
  char current_time[50];
  char hostname[10];
  host(hostname);
  datetime(current_time);

  printf("host: %s | battery: %.2f | %s\n", hostname, battery_status(), current_time);

  return 0;
}
