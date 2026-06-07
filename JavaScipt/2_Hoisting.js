// var y = 2;
// function say() {
//   var y = 4;
//   console.log(y);
//   var y = 1;
// }

// say();

let a = 8;
let b = 4;
function hoisting() {
  let b = 43;
  console.log(b);
  console.log(a);
  a = 9;
}
hoisting();
