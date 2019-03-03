CC = gcc
CFLAGS = -Wall -std=c99

all: lcs2 lcs3
	
lcs2: lcs2.c
	$(CC) $(CFLAGS) -o lcs2 lcs2.c
	
lcs3: lcs3.c
	$(CC) $(CFLAGS) -o lcs3 lcs3.c

clean:
	rm lcs2 lcs3
