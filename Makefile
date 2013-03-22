# See LICENSE file for copyright and license details.

include config.mk

install:
	echo "Installing executable file to /usr/local/bin"
	gcc status-foobar/main.c -I ./status-foobar -I ./include -o /usr/local/bin/status-foobar -lX11
	chmod 755 /usr/local/bin/status-foobar

uninstall:
	echo "Uninstalling executable file from /usr/local/bin"
	rm -f /usr/local/bin/status-foobar
