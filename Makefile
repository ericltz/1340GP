cc = g++
prom = game
deps = *.h
obj = main.o format.o screen.o keyboard.o object.o window.o notice.o
flag = -pthread

$(prom): $(obj)
	$(cc) -o $(prom) $(flag) $^
 
%.o: %.cpp %.h
	$(cc) -c $< -o $@
 
clean:
	rm -rf $(obj) $(prom)
