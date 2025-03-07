TARGETS = sort_test
CXXFLAGS = -std=c++11 -g
CXX = g++
LD = g++
CC = g++

# Object files
OBJS = sort_test.o main.o builtin.o merge_sort.o quicksort.o selection_sort.o insertion_sort.o bubble_sort.o counting_sort.o radix_sort.o

# Target for the final executable
$(TARGETS): $(OBJS)
	$(LD) -o $(TARGETS) $(OBJS)

# Compile source files into object files
sort_test.o: sort_test.cpp sort_test.h
	$(CXX) $(CXXFLAGS) -c sort_test.cpp

main.o: main.cpp builtin.h merge_sort.h quicksort.h selection_sort.h sort_test.h insertion_sort.h bubble_sort.h counting_sort.h radix_sort.h
	$(CXX) $(CXXFLAGS) -c main.cpp

builtin.o: builtin.cpp builtin.h
	$(CXX) $(CXXFLAGS) -c builtin.cpp

merge_sort.o: merge_sort.cpp merge_sort.h
	$(CXX) $(CXXFLAGS) -c merge_sort.cpp

quicksort.o: quicksort.cpp quicksort.h
	$(CXX) $(CXXFLAGS) -c quicksort.cpp

selection_sort.o: selection_sort.cpp selection_sort.h
	$(CXX) $(CXXFLAGS) -c selection_sort.cpp

insertion_sort.o: insertion_sort.cpp insertion_sort.h
	$(CXX) $(CXXFLAGS) -c insertion_sort.cpp

bubble_sort.o: bubble_sort.cpp bubble_sort.h
	$(CXX) $(CXXFLAGS) -c bubble_sort.cpp

counting_sort.o: counting_sort.cpp counting_sort.h
	$(CXX) $(CXXFLAGS) -c counting_sort.cpp

radix_sort.o: radix_sort.cpp radix_sort.h
	$(CXX) $(CXXFLAGS) -c radix_sort.cpp

# Clean command to remove generated files
clean:
	rm -f *.o $(TARGETS)
