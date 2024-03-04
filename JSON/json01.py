import json

# JSON -> JavaScript Object Notion
# a standardized format commonly used to transfer data as text that can be sent over a network
# JSON represents objects as name/value pairs, just like a Python dictionary.

person_JSON = '{"name": "Brendon", "surname":"Jeje", "age":20}'

print(type(person_JSON)) #the person_JSON is a string object

person = json.loads(person_JSON) #converting JSON string into a valid python object, in particular a python dictionary

print(type(person)) #the type of person is now a dict object

## we can now perform normal dictionary operations such as method calls on person object

print(person["name"])
