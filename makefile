ccsrc = $(wildcard src/*.cpp) \
        $(wildcard *.cpp)
obj = $(ccsrc:.cpp=.o)
dep = $(obj:.o=.d)

LDFLAGS = -lGL -lpng -lz -lm

#change prog name if you like
casper: $(obj) 
	$(CXX) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) casper #program name
