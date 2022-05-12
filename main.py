# Import Module
import os
  
# Folder Path
path = "/Users/tuannguyen/Desktop/Tony/topics/code-refactoring/refactoring/data"
  
# Change the directory
os.chdir(path)
  
# Read text File

def read_text_file(file_path):
    with open(file_path, 'r') as f:
        print(f.read())

# iterate through all file
for file in os.listdir():
    # Check whether file is in text format or not
    if file.endswith(".cpp"):
        file_path = f"{path}/{file}"
        read_text_file(file_path)
