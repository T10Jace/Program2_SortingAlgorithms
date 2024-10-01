TARGETS = sort_test
CXXFLAGS = -std=c++11 -g
CXX = g++
LD = g++
CC = g++

# Object files
OBJS = sort_test.o main.o builtin.o merge_sort.o quicksort.o selection_sort.o

# Target for the final executable
$(TARGETS): $(OBJS)
	$(LD) -o $(TARGETS) $(OBJS)

# Compile source files into object files
sort_test.o: sort_test.cpp sort_test.h
	$(CXX) $(CXXFLAGS) -c sort_test.cpp

main.o: main.cpp builtin.h merge_sort.h quicksort.h selection_sort.h sort_test.h
	$(CXX) $(CXXFLAGS) -c main.cpp

builtin.o: builtin.cpp builtin.h
	$(CXX) $(CXXFLAGS) -c builtin.cpp

merge_sort.o: merge_sort.cpp merge_sort.h
	$(CXX) $(CXXFLAGS) -c merge_sort.cpp

quicksort.o: quicksort.cpp quicksort.h
	$(CXX) $(CXXFLAGS) -c quicksort.cpp

selection_sort.o: selection_sort.cpp selection_sort.h
	$(CXX) $(CXXFLAGS) -c selection_sort.cpp

clean:
	rm -f *.o $(TARGETS)
