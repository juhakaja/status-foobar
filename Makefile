# See LICENSE file for copyright and license details.

include config.mk

install:
	@echo "Installing executable file to ${DESTDIR}."
	@gcc -c status-foobar/host.c -I ./status-foobar -I ./include -o host.o
	@gcc -c status-foobar/datetime.c -I ./status-foobar -I ./include -o datetime.o
	@gcc -c status-foobar/battery_status.c -I ./status-foobar -I ./include -o battery_status.o
	@gcc -c status-foobar/statusbar.c -I ./status-foobar -I ./include -o statusbar.o
	@gcc -c status-foobar/main.c -I ./status-foobar -I ./include -o main.o
	@gcc main.o statusbar.o battery_status.o datetime.o host.o -o ${DESTDIR}/status-foobar -lX11
	@chmod 755 ${DESTDIR}/status-foobar

uninstall:
	@echo "Uninstalling executable file from ${DESTDIR}"
	@rm -f ${DESTDIR}/status-foobar

tmp:
	@echo "Installing executable file to /tmp."
	@gcc -c status-foobar/host.c -I ./status-foobar -I ./include -o host.o
	@gcc -c status-foobar/datetime.c -I ./status-foobar -I ./include -o datetime.o
	@gcc -c status-foobar/battery_status.c -I ./status-foobar -I ./include -o battery_status.o
	@gcc -c status-foobar/statusbar.c -I ./status-foobar -I ./include -o statusbar.o
	@gcc -c status-foobar/main.c -I ./status-foobar -I ./include -o main.o
	@gcc main.o statusbar.o battery_status.o datetime.o host.o -o /tmp/status-foobar -lX11
	@chmod 755 /tmp/status-foobar

clean:
	@echo "Cleaning .o files."
	@rm host.o datetime.o battery_status.o statusbar.o main.o
