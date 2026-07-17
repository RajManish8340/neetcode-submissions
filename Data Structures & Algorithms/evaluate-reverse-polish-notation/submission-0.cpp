class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        for (string& t : tokens) {
            if (t == "+") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b + a);
            } else if (t == "-") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b - a);
            } else if (t == "*") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b * a);
            } else if (t == "/") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b / a);
            } else {
                int num = stoi(t);
                stack.push(num);
            }
        }
        return stack.top();
    }
};
