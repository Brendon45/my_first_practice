import sys
import json

def save_to_json_file(my_obj, filename):
    with open(filename, mode="w", encoding="UTF-8") as f:
        json.dump(my_obj, f, indent=2)

def load_from_json_file(filename):
    with open(filename, encoding="UTF-8") as f:
        return (json.load(f))

if __name__=="__main__":

    new_obj = {
        "name" : "Brendon",
        "age":20, 
        "not_married" : True, 
        "is_good":None
    }

    save_to_json_file(new_obj, "jason_file.json")

    my_returned_object = load_from_json_file("jason_file.json")
    print(my_returned_object)
