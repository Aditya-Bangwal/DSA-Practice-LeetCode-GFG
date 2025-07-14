//Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']', verify the validity of the arrangement.
//An input string is valid if:
//1. Open brackets must be closed by the same type of brackets.
//2. Open brackets must be closed in the correct order.

bool isBalanced(string& k) {
        // code here
        stack<char>s;//initializing a stack
       for(int i=0;i<k.size();i++)
       {
           if(!s.empty() )  //if stack is not empty.
           {
               if(s.top()=='[' && k[i]==']')  //if stack top is [ and current character is ] it means bracket is closed.
               {
                   s.pop();
               }
               else if(s.top()=='{' && k[i]=='}')    //if stack top is { and current character is } it means bracket is closed.
               {
                   s.pop();
               }
               else if(s.top()=='(' && k[i]==')'){    //if stack top is ( and current character is ) it means bracket is closed.
                   s.pop();
                   
               }
               
               else{
                   s.push(k[i]);   //if none of the case match just push the current character in the string.
            
               }
           }
           else{  // if stack is empty
               s.push(k[i]);
           }
           
       }
       //checking if any element left in stack
       if(s.empty())
       {
           return true;  //if elements are not in the stack 
       }
       else{
           return false; //if elements are present in the stack
       }
    }

