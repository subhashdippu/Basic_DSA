// Radha
const arr = [1, 9, 2, 3, 3, 4, 5, 4, 5];
// console.log(arr);
// arr.sort();

arr.sort((a, b) => {
  return b - a; // accending order vice - versa
});

console.log(arr);
