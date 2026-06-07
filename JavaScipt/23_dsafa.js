// Radh

const users = [
  { firstName: "Subhash", lastName: "Prasad", age: 26 },
  { firstName: "Chandan", lastName: "Prasad", age: 22 },
  { firstName: "Subhash", lastName: "Prasad", age: 26 },
  { firstName: "Elon", lastName: "Musk", age: 66 },
  { firstName: "Bill", lastName: "Gates", age: 68 },
];

const map = {};
let duplicate = false;

for (let i = 0; i < users.length; i++) {
  const key = JSON.stringify(users[i]);

  if (map[key]) {
    map[key]++;
  } else {
    map[key] = 1;
  }
}

console.log(map);
