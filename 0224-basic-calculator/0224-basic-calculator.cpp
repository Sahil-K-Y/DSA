class Solution {
public:
    int calculate(string s) {
                stack<int> st;
        int result = 0, sign = 1;
        long long number = 0;
        for (char c : s) {
            if (isdigit(c)) {
                number = number * 10 + (c - '0');
            } 
            else if (c == '+' || c == '-') {
                result += sign * number;
                number = 0;
                sign = (c == '+') ? 1 : -1;
            } 
            else if (c == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            } 
            else if (c == ')') {
                result += sign * number;
                number = 0;

                result *= st.top();
                st.pop();

                result += st.top();
                st.pop();
            }
        }

        return result + sign * number;
    }
};