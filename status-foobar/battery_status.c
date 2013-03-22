float energy_full()
{
  FILE *fd;
  int energy_full;
  
  fd = fopen("/sys/class/power_supply/BAT0/energy_full", "r");
  if(fd == NULL) {
  	fprintf(stderr, "Error opening energy_full.\n");
  	return -1;
  }
  fscanf(fd, "%d", &energy_full);
  fclose(fd);
  
  return energy_full;
}

float energy_now()
{
  FILE *fd;
  int energy_now;
  
  fd = fopen("/sys/class/power_supply/BAT0/energy_now", "r");
  if(fd == NULL) {
  	fprintf(stderr, "Error opening energy_now.\n");
  	return -1;
  }
  fscanf(fd, "%d", &energy_now);
  fclose(fd);
  
  return energy_now;
}

void battery_status(char *battery) {
  int status;
  
  status = (int)(energy_now() / energy_full() * 100);
  sprintf(battery, "%d%%", status);
}
