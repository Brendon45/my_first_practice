import json

#We can also convert back the python objcet into a json string

person_JSON = '{"name": "Brendon", "surname":"Jeje", "age":20}'

print(type(person_JSON)) #the person_JSON is a string object

person = json.loads(person_JSON) #converting JSON string into a valid python object, in particular a python dictionary
print(type(person)) #the type of person is now a dict object
print(person["name"])

person["name"] = "Tendai"

new_person_JSON = json.dumps(person)
print(type(new_person_JSON))
print(new_person_JSON)
#print(new_person_JSON["name"]) ##this will give error because the new_person_JSON is a string and not a dictionary
