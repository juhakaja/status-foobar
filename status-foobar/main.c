#include "battery_status.h"
#include "host.h"
#include "datetime.h"
#include "statusbar.h"

main()
{
  char current_time[50];
  char hostname[10];
  char battery_remain[4];
  char status_string[100];

  launch_statusbar();

  for (;;sleep(1)) {
    host(hostname);
    datetime(current_time);
    battery_status(battery_remain);

    status(status_string, hostname, battery_remain, current_time);
    statusbar(status_string);
  }

  close_statusbar();

  return 0;
}
