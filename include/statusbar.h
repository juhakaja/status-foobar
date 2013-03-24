#ifndef STATUSBAR_H_INCLUDED
#define STATUSBAR_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <X11/Xlib.h>

static Display *display;

void launch_statusbar();
void close_statusbar();
void status(char *status_string, char *hostname, char *battery_remain, char *current_time);
void statusbar(char *status_string);

#endif
