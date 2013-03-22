void host(char *hostname)
{
  size_t len;

  gethostname(hostname, len);
}
