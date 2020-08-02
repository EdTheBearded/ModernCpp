CC:=g++
CPPFLAGS:=-std=c++11

DEPS = Case.h

ODIR = obj
_OBJ = main.o Case.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) $(CPPFLAGS) -c $< -o $@

main: $(OBJ)
	$(CC) $(CPPFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o main