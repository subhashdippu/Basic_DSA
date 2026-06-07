// Radha

// Approch 1
const arr = [2, 4, 5, 1, 5];
function double(x) {
  return x * 2;
}
const output = arr.map(double);
// console.log(output);

// Approch 2 Convert it into string

const arr2 = [2, 4, 4, 9, 5, 6];
function binary(x) {
  return x.toString(2);
}
const output2 = arr2.map(binary);
// console.log(output2);

// Approch 3
const arr3 = [2, 4, 4, 9, 5, 6];

const output3 = arr3.map(function binary(x) {
  return x.toString(2);
});
// console.log(output3);

// Approch 4 If you have to return only 1 thing then you don't have to use then block {}

const arr4 = [2, 4, 4, 9, 5, 6];

const output4 = arr4.map((x) => x.toString(2));
console.log(output4);
