# See LICENSE file for copyright and license details.

include config.mk

install:
	@echo "Installing executable file to /usr/local/bin."
	@gcc -c status-foobar/statusbar.c -I ./status-foobar -I ./include -o statusbar.o -lX11
	@gcc -c status-foobar/main.c -I ./status-foobar -I ./include -o main.o -lX11
	@gcc main.o statusbar.o -o ${DESTDIR}/status-foobar -lX11
	@chmod 755 ${DESTDIR}/status-foobar

uninstall:
	@echo "Uninstalling executable file from /usr/local/bin"
	@rm -f /usr/local/bin/status-foobar

tmp:
	@echo "Installing executable file to /tmp."
	@gcc -c status-foobar/statusbar.c -I ./status-foobar -I ./include -o statusbar.o -lX11
	@gcc -c status-foobar/main.c -I ./status-foobar -I ./include -o main.o -lX11
	@gcc main.o statusbar.o -o /tmp/status-foobar -lX11
	@chmod 755 /tmp/status-foobar

clean:
	@echo "Cleaning .o files."
	@rm statusbar.o main.o
