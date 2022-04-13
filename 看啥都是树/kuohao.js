var removeOuterParentheses = function (S) {
  let res = "";
  let level = 0;
  for (let i = 0; i < S.length; i++) {
    if (S.charAt(i) === "(") {
      level++;
      if (level === 1) {
        continue;
      }
    } else {
      level--;
      if (level === 0) {
        continue;
      }
    }

    res += S.charAt(i);
  }

  return res;
};

