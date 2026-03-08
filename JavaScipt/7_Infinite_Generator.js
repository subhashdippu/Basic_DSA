// Radha;
function* gen() {
  let x = 0;
  while (true) {
    yield x;
    x++;
  }
}

const g = gen();
console.log(g.next());
console.log(g.next());
console.log(g.next());
console.log(g.next().value);
console.log(g.next());
