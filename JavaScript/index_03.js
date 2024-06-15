// reference types: Object, Array, Function

/* An object is a data structure that we use to represent 
a collection of key-value pairs. */


let person = {
    name: 'Brendon',
    age: 20
  };
  
  // Dot Notation
  person.name = 'Tafara';
  
  
  // Bracket Notation
  person['name'] = 'Cecilia';
  // OR
  let selection = 'name';
  person[selection] = 'Cecilia';
  
  console.log(person.name);