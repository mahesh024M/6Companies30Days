class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<long long int> st;
        for(auto it:tokens){
               string str=it;

               if(str=="+" || str=="-" || str=="*" || str=="/"){
                    int op2=st.top();
                    st.pop();
                    int op1=st.top();
                    st.pop();

                    switch(str[0]){
                        case '+':
                        st.push(op1+op2);
                        break;

                        case '-':
                        st.push(op1-op2);
                        break;
                        case '*':
                        st.push(op1*op2);
                        break;
                         case '/':
                        st.push(op1/op2);
                        break;
                     

                    }

               }
               else{
                   int val=stoi(str);
                   st.push(val);
               }


        }

         return st.top();


        
    }
};