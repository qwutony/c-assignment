#!/bin/bash

# < means read file into the program input
# > means to write program's output into file
# this is called "redirection"

yes | build/hexdump hexdump-test-text > textOutput.txt
yes | build/hexdump hexdump-wikipedia.ico > wikiOutput.txt