# See LICENSE file for copyright and license details.

include config.mk

install:
		gcc status-foobar/main.c -I ./status-foobar -I ./include -o bat -lX11
