// Radha;
// var global scope
// this global object

var length = 10;
function fn() {
  console.log(this.length);
}
var obj = {
  length: 5,
  method: function (fn) {
    fn();
    arguments[0]();
  },
};
// fu();
obj.method(fn, 1);
