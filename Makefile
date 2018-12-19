# store all our executables in a variable
# eventually this will look like:
#EXECUTABLES = hexdump keylogger passcheck
# but for now it's empty
EXECUTABLES = strings
# put all executables in `build` directory
TARGETS = $(patsubst %, build/%, $(EXECUTABLES))
# default make rule
# this rule is run when typing `make` by itself
all: $(TARGETS)
	@# make sure build directory exists
# eventually our `all` rule will look like this:
#all: hexdump keylogger passcheck
# anything in the build directory depends on the corresponding .c file
build/%: %.c
	@mkdir -p build
	gcc -g -o $@ $<
# deletes executables (`make clean`)
clean:
	rm -r build