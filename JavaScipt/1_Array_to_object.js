// Radha
// NaN - Not a Number

// const arr = ["a", "b", "c", "d"];

// let obj = arr.reduce((a, it) => ({ ...a, [it]: it }), {});
// console.log(obj);
const arr = [2, 3, 5, "6d"];
let obj = arr.reduce((a, it, ind) => ({ ...a, [ind]: it }), {});
console.log(obj);
