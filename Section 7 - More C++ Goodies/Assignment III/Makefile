CC:=g++
CPPFLAGS:=-std=c++11

DEPS = Case.h FindAll.h

ODIR = obj
_OBJ = FindAll.o Case.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) $(CPPFLAGS) -c $< -o $@

main: $(OBJ)
	$(CC) $(CPPFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o main