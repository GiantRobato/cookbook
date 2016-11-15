CC=gcc

# compiler flags
# -g	adds debugging info
# -Wall	displays most, but not all, compiler warnings
CFLAGS= -g -Wall

TARGET= output

#
INCLUDES=
LFLAGS=
LIBS=

SRCS= main.c

OBJS=$(SRCS:.c=.o)

all: $(TARGET)
	@if [ -d "bin" ]; then echo "bin exists"; else mkdir bin; fi
	mv $(TARGET) bin
	@echo "Finished Compiling"

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(OBJS) $(LFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) *.o *~ bin/$(TARGET)
