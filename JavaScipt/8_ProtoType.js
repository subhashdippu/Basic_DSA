// Radha
// ProtoType is a predefine fuctions we can also define

const arr = [1, 2, 3, 4, 5];

Array.prototype.sum = function () {
  return this.reduce((acc, it) => acc + it, 0);
};
console.log(arr.sum());
