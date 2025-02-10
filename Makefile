all: compile run clean

compile:
	@g++ -std=c++11 vector.cpp -o vec

run:
	@./vec

clean:
	@rm vec