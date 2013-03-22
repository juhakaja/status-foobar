#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include "battery_status.h"
#include "host.h"
#include "datetime.h"
#include "statusbar.h"

static Display *display;

main()
{
  char current_time[50];
  char hostname[10];
  char battery[4];

  display = XOpenDisplay(NULL);

  for (;;sleep(1)) {
    host(hostname);
    datetime(current_time);
    battery_status(battery);

    statusbar(hostname, battery, current_time);
  }

  XCloseDisplay(display);

  return 0;
}
