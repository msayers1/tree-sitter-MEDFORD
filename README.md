# Medford Tree-Sitter Repo
## Basic Setup Link: https://tree-sitter.github.io/tree-sitter/using-parsers#getting-started
## Using Medford Tree-Sitter: 
Once you have tree-sitter installed. You can run tree-sitter generate to create the parser from the grammar.js. Then you are able to parse files with tree-sitter parse FILENAME. 
## Example Build Bash Script
There is an exampleBuild.sh(Bash Script), which has a EXAMPLE_FOLDER variable which will allow you to designate where you have sample Medford files and parse thru the files, and in the same directory create .parsedOutput files which will be the output of tree-sitter. (Slight Disclaimer this was created on an Ubuntu VM.)