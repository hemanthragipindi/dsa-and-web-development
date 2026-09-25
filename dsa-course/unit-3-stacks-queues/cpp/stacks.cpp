#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool hasBalancedBrackets(const string& expression) {
    stack<char> brackets;
    for (char symbol : expression) {
        if (symbol == '(' || symbol == '[' || symbol == '{') {
            brackets.push(symbol);
        } else if (symbol == ')' || symbol == ']' || symbol == '}') {
            if (brackets.empty()) return false;
            char opening = brackets.top();
            brackets.pop();
            if ((symbol == ')' && opening != '(') ||
                (symbol == ']' && opening != '[') ||
                (symbol == '}' && opening != '{')) {
                return false;
            }
        }
    }
    return brackets.empty();
}

int main() {
    cout << (hasBalancedBrackets("{[()]}") ? "Balanced" : "Not balanced") << '\n';
    return 0;
}
