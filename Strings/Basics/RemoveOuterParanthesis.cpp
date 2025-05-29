// Online C++ compiler to run C++ program online
class Solution {
public:
// Pseudo code:-
/* 
1. Create 2 variables result:-to store the result, Balance:- to store the balance of the ( and ).
2. Iterate through the whole string 
3. If that character is ( and if the balance is >0 then add it to the result and increase the balance.
4. else decrease the balance and if the balance>0 add it to the result.
5. return the result 
*/
    string removeOuterParentheses(string s) {
        string result;

        int balance = 0;
        // iterating through the string
        for(int i=0; i<s.size(); i++){
            // if ith character is open bracket then 
            if(s[i] == '('){
                // and if balance>0 add it in the result 
                if(balance>0){
                    result += s[i];
                }
                // and  increase the balance  
                balance++;
            }
            // else decrease the balance
            else{
                balance--;
                // if the balance is greater than 0 add the ith character in the result
                if(balance>0){
                    result+=s[i];
                }
            }
        }
        return result;
    }
};
int main() {
    // Write C++ code here
    solution solve;
    string input;
    cout<<"enter a sting"<<endl;
    cin>>input;
    string output = solve.removeOuterParanthesis(input);
    cout<<output<<endl;

    return 0;
}