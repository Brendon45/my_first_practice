import json

def save_to_json_file(my_obj, filename):
    with open(filename, mode="w", encoding="UTF-8") as f:
        converted_obj = json.dumps(my_obj)
        f.write(converted_obj)


filename = "my_list.json"
my_list = [1, 2, 3]
save_to_json_file(my_list, filename)

filename = "my_dict.json"
my_dict = { 
    'id': 12,
    'name': "Tom",
    'places': [ "Gweru", "Bulawayo" ],
    'is_active': True,
    'info': {
        'age': 26,
        'average': 3.14
    }
}
save_to_json_file(my_dict, filename)

try:
    filename = "my_set.json"
    my_set = { 132, 3 }
    save_to_json_file(my_set, filename)
except Exception as e:
    print("[{}] {}".format(e.__class__.__name__, e))
