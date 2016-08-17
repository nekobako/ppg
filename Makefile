CC=gcc
CFLAGS=-O

ppg: ppg.c ppg.h
	$(CC) $(CFLAGS) -o ppg ppg.c
