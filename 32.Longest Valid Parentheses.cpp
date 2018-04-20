class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> sk;
        int len=0;
        sk.push(-1);
        for(int i=0;i<s.size();i++){
			if(s[i]=='(') {
            	sk.push(i);
			}
            else{
            	if(s[sk.top()]=='(') {
                sk.pop();
                len=max(len,i-sk.top());
            	}else{
                	sk.push(i);
            	}
       		}  	
		} 
        return len;
    }
};