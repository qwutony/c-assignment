#!/bin/bash

# < means read file into the program input
# > means to write program's output into file
# this is called "redirection"

build/hexdump hexdump-test-text > textOutput.txt
build/hexdump hexdump-wikipedia.ico > wikiOutput.txt