VERSION = 3.02
CC = C:\TDM-GCC-32\bin\gcc
CFLAGS = -Wall -g -Iiup-3.16/include 
LDFLAGS = -Liup-3.16/lib -liup -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32

OBJ = main.o
BIN = main

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) -o $(BIN) $(OBJ) $(LDFLAGS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $<
	
.PHONY: clean
clean:
	del $(BIN) $(OBJ)