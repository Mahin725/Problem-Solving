class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st;
       for(auto ch:s){
        if(st.empty()){
            st.push(ch);
            continue;
        }
        if(st.top() !=ch){
            st.push(ch);
        }else{
            st.pop();
        }
       }
       string new_s ="";
        while(!st.empty()){
            char ch = st.top();
            new_s+=ch;
            st.pop();
        }
        reverse(new_s.begin(),new_s.end());
        return new_s;
    }
};