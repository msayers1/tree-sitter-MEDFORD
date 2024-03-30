#ChatGPT 3.5 Credit. 
#!/bin/bash

# Define the folder containing the example files
EXAMPLE_FOLDER="./examples"

# Check if the example folder exists
if [ ! -d "$EXAMPLE_FOLDER" ]; then
    echo "Example folder not found: $EXAMPLE_FOLDER"
    exit 1
fi

# Remove all existing .parsedOutput files
rm -f "$EXAMPLE_FOLDER"/*.parsedOutput

# Loop through each file in the example folder
for FILE_PATH in "$EXAMPLE_FOLDER"/*; do
    # Check if the file is a regular file
    if [ -f "$FILE_PATH" ]; then
        # Define the output file path with .parsedOutput extension
        OUTPUT_FILE="${FILE_PATH}.parsedOutput"
        # Run tree-sitter parse with the file as a parameter
        tree-sitter parse "$FILE_PATH" >> "$OUTPUT_FILE"
    fi
done