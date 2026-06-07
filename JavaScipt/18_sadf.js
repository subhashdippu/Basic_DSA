// Radha;

// function a() {
//   var b = 5;
//   c();
//   function c() {
//     console.log(b);
//   }
// }

// a();
// console.log(b);

var a = 4;
let b = 8;
{
  var a = 6;
  let b = 9;
  var c = 98;
  //   console.log(a);
  console.log(b);
}
// console.log(a);
console.log(b);

/*
1 pass
a = {}

pass 2
b = undefine
c = {}

pass 3
b = 5
*/
