#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMatchingPair(char left, char right) {
  return (left == '(' && right == ')') || (left == '{' && right == '}') ||
         (left == '[' && right == ']');
}

bool areBracketsBalanced(const string &expression) {
  stack<char> s;

  for (char ch : expression) {
    // If the character is an opening bracket, push it onto the stack
    if (ch == '(' || ch == '{' || ch == '[') {
      s.push(ch);
    }
    // If the character is a closing bracket
    else if (ch == ')' || ch == '}' || ch == ']') {
      // If stack is empty or top of the stack doesn't match the current closing
      // bracket
      if (s.empty() || !isMatchingPair(s.top(), ch)) {
        return false;
      }
      // Pop the matched opening bracket from the stack
      else {
        s.pop();
      }
    }
  }

  // If the stack is empty, all opening brackets have been matched
  return s.empty();
}

int main() {
  string expression;
  cout << "Enter an expression: ";
  cin >> expression;

  if (areBracketsBalanced(expression)) {
    cout << "The brackets are balanced." << endl;
  } else {
    cout << "The brackets are not balanced." << endl;
  }

  return 0;
}
