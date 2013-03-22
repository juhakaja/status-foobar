static Display *display;

void statusbar(char *hostname, char *battery, char *current_time)
{
  char status[100];

  sprintf(status, "host: %s | battery: %s | %s", hostname, battery, current_time);

  XStoreName(display, DefaultRootWindow(display), status);
  XSync(display, False);
}
