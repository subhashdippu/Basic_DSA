// // Radha
// function outest() {
//   var c = 1;
//   function outer(b) {
//     function inner(a) {
//       console.log(a, b, c);
//     }
//     var a = 5;
//     return inner;
//   }
//   return outer;
// }

// var close = outest();
// close(8)();

function outest() {
  var g = 4;
  function outer() {
    console.log(g);
  }
  outer();
}

outest();
