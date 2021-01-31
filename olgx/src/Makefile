CC:= gcc
LDFLAGS := 
CFLAGS_INC := -I. -I../include -I/opt/X11/include 
CFLAGS := -DXLIB_ILLEGAL_ACCESS -DX11R6  -DNON_PORTABLE -w $(CFLAGS_INC)
##
SRCS := $(wildcard *.c)
PRGS := $(patsubst %.c,%,$(SRCS))
OBJS := $(patsubst %,%.o,$(PRGS))
##
all : $(OBJS)
