CC=gcc
CXX=g++
RM=rm -f

PHONY:clean
SRCS= wavelabs_silicon_valley.cc  wavelabs_silicon_exchange.cc 
OBJS=$(subst .cc,.o,$(SRCS))

all: wlabs_silicon_bin

wlabs_silicon_bin: $(OBJS)
	$(CXX) -o wlabs_silicon_bin $(OBJS)

clean:
	$(RM) *.o wlabs_silicon_bin
