// Radha
const arr = [1, 2, 4, 5, 3, 2, 2, 1, 2];
let s = new Set(arr);

console.log(s);

const hashmap = {};
arr.forEach((it) => {
  if (it in hashmap) {
    hashmap[it]++;
  } else {
    hashmap[it] = 1;
  }
});
console.log(hashmap);
