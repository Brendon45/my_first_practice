import json

#Saving JSON string to JSON file, using file concept

person_JSON = '{"name": "Brendon", "surname":"Jeje", "age":20}'

with open("person.json", mode="w", encoding="UTF-8") as json_file:
    json_file.write(person_JSON)
    print("Person saved successfully")
