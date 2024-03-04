import json

##Reading contents from a json file

# person_JSON = '{"name": "Brendon", "surname":"Jeje", "age":20}'

# with open("person.json", mode="w", encoding="UTF-8") as json_file:
#     json_file.write(person_JSON)
#     print("Person saved successfully")

with open("person.json", encoding="UTF-8") as json_file:
    person_JSON = json_file.read()
    print(person_JSON)
    person = json.loads(person_JSON)
    print(person)
    name = person["name"]
    surname = person["surname"]
    age = person["age"]

    print(f"The person fetched from the JSON file is called {name} {surname} and is {age} years old")
