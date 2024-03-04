import sys
import json

def save_to_json_file(my_obj, filename):
    with open(filename, mode="w", encoding="UTF-8") as f:
        json.dump(my_obj, f, indent=2)

def load_from_json_file(filename):
    with open(filename, encoding="UTF-8") as f:
        return (json.load(f))

if __name__=="__main__":
    try:
        new_list = load_from_json_file("argv.json")
    except FileNotFoundError:
        new_list = []

    new_list.extend(sys.argv[1:])
    save_to_json_file(new_list, "argv.json")
