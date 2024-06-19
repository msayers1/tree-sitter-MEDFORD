#ChatGPT 3.5 Credit. 
#!/bin/bash

# Make sure you have npm installed and ran the npm install once. 

# Define the folder containing the example files
EXAMPLE_FOLDER="./examples"
tree_sitter_path="node_modules/tree-sitter-cli"

# Check if the example folder exists
if [ ! -d "$EXAMPLE_FOLDER" ]; then
    echo "Example folder not found: $EXAMPLE_FOLDER"
    exit 1
fi

# Remove all existing .parsedOutput files
rm -f "$EXAMPLE_FOLDER"/*.parsedOutput
# Added a command to generate the grammar files which the parser uses, otherwise it will use the same parsing
# files as the last time which you ran the generate command. 
"$tree_sitter_path/tree-sitter" generate
# Loop through each file in the example folder
for FILE_PATH in "$EXAMPLE_FOLDER"/*; do
    # Check if the file is a regular file
    if [ -f "$FILE_PATH" ]; then
        # Define the output file path with .parsedOutput extension
        OUTPUT_FILE="${FILE_PATH}.parsedOutput"
        # Run tree-sitter parse with the file as a parameter
        # node_modules/tree-sitter-cli/tree-sitter parse "$FILE_PATH" >> "$OUTPUT_FILE"
        "$tree_sitter_path/tree-sitter" parse "$FILE_PATH" >> "$OUTPUT_FILE"
    fi
done