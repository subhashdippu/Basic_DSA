// Radha

const users = [
  { firstName: "Subhash", lastName: "Prasad", age: 26 },
  { firstName: "Chandan", lastName: "Prasad", age: 22 },
  { firstName: "Subhash", lastName: "Prasad", age: 26 },
  { firstName: "Elon", lastName: "Musk", age: 66 },
  { firstName: "Bill", lastName: "Gates", age: 68 },
];

const map = {};
users.map((x) => {
  if (x.age > 22 && x.age < 67) {
    console.log(x.firstName, x.lastName);
  }
});
// console.log(map);
