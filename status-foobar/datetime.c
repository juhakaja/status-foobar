#include "datetime.h"

void datetime(char *current_time)
{
  time_t now = time(NULL);
  struct tm * dts = localtime(&now);

  strftime(current_time, 1000, "%a, %b %d %H:%M:%S %Z %Y", dts);
}
