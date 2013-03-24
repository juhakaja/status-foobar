#include "statusbar.h"

void launch_statusbar()
{
  display = XOpenDisplay(NULL);
}

void close_statusbar()
{
  XCloseDisplay(display);
}

void status(char *status_string, char *hostname, char *battery_remain, char *current_time)
{
  sprintf(status_string, "host: %s | battery: %s | %s", hostname, battery_remain, current_time);
}

void statusbar(char *status_string)
{
  XStoreName(display, DefaultRootWindow(display), status_string);
  XSync(display, False);
}
