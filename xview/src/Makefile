CC:= gcc
LDFLAGS := 
CFLAGS_INC := -I../include -I/opt/X11/include
CFLAGS := -g -DX11R6 -w $(CFLAGS_INC)
##
SRCS := $(wildcard *.c)
PRGS := $(patsubst %.c,%,$(SRCS))
OBJS := $(patsubst %,%.o,$(PRGS))
##
all : $(OBJS)
