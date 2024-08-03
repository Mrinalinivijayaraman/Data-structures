#include <iostream>
#include <string>
using namespace std;

class Stack {
public:
    char element[50];
    int top=-1;
    int sizes=10;

public:

    void push(char x) {
        if (top < sizes - 1) {
            top++;
            element[top] = x;
        } else {
            cout << "Overflow" << endl;
        }
    }

    char pop() {
        if (top != -1) {
            return element[top--];
        } else {
            cout << "No element to pop" << endl;

        }
    }

    bool isEmpty() {
        return top == -1;
    }
};

bool areBracketsBalanced(string expr) {
    Stack s;
    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            s.push(expr[i]);
        }
        else
        {

        if (s.isEmpty())
        return false;
char x = s.pop();
switch (expr[i])

{
case ')':
    if (x != '(')
        return false;
        break;
case '}':
    if (x != '{')
        return false;
        break;
case ']':

    if (x != '[')
        return false;
        break;
            }
        }
    }
    return s.isEmpty();
}

int main() {
    string expr1="{()}";
    string expr2="{(})";
    string expr3="[{}]";
    string expr4=" ";
    cout<<(areBracketsBalanced(expr1)?"balanced":"notbalanced")<<endl;
    cout<<(areBracketsBalanced(expr2)?"balanced":"notbalanced")<<endl;
    cout<<(areBracketsBalanced(expr3)?"balanced":"notbalanced")<<endl;
    //cout<<(areBracketsBalanced(expr4)?"balanced":"notbalanced")<<endl;
}
