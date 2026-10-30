class Solution {
public:
    int calculate(string s) {
        stack<int> st;

        int number = 0;
        char sign = '+';

        for (int i = 0; i < s.size(); i++) {

            // Current number banao
            if (isdigit(s[i])) {
                number = number * 10 + (s[i] - '0');
            }

            // Operator mila ya string khatam hui
            if ((!isdigit(s[i]) && s[i] != ' ') ||
                i == s.size() - 1) {

                if (sign == '+') {
                    st.push(number);
                }
                else if (sign == '-') {
                    st.push(-number);
                }
                else if (sign == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * number);
                }
                else if (sign == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / number);
                }

                sign = s[i];
                number = 0;
            }
        }

        int ans = 0;

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};