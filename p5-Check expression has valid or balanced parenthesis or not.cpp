// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
    stack<char>s;
    char a;
    // traverse the string and check one by one
    for(int i=0;i<x.size();i++){
      if(x[i]=='(' || x[i]=='{' || x[i]=='['){
        s.push(x[i]);
        continue;
      }
      // if opening bracket is not encountered
      // check case-1 when closing bracket is found on empty stack
      else if(s.empty()) return false;
      switch(x[i]){
        case ')':
          a=s.top();
          s.pop();
          if(a!='(') 
            return false;
          break;
        case '}':
          a=s.top();
          s.pop();
          if(a!='{') 
            return false;
          break;
        case ']':
          a=s.top();
          s.pop();
          if(a!='[') 
            return false;
          break;
      }
    }
    return(s.empty()); // check case-3 if stack is empty return true else return false
    }

};
