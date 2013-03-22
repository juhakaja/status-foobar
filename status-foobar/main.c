#include <stdio.h>
#include <string.h>
#include "battery_status.h"
#include "host.h"
#include "datetime.h"

main()
{
  char current_time[50];
  char hostname[10];
  char battery[4];

  host(hostname);
  datetime(current_time);
  battery_status(battery);

  printf("host: %s | battery: %s | %s\n", hostname, battery, current_time);

  return 0;
}
