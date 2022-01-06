CPP    = g++
RM     = rm -f
OBJS   = MyStackTest.o \
         MyQueue.o

LIBS   =
CFLAGS =

.PHONY: C++\ oficial.exe clean clean-after

all: C++\ oficial.exe

clean:
	$(RM) $(OBJS) C++\ oficial.exe

clean-after:
	$(RM) $(OBJS)

C++\ oficial.exe: $(OBJS)
	$(CPP) -Wall -s -o '$@' $(OBJS) $(LIBS)

MyStackTest.o: MyStackTest.cpp MyQueue.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

MyQueue.o: MyQueue.cpp MyQueue.h
	$(CPP) -Wall -s -c $< -o $@ $(CFLAGS)

