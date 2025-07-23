//Convert a sentence into its equivalent mobile numeric keypad sequence

//string printSequence(string S) {
    //jvwn
    // code here.
    unordered_map<string,string>st;
    st["A"]="2";
    st["B"]="22";
    st["C"]="222";
    st["D"]="3";
    st["E"]="33";
    st["F"]="333";
    st["G"]="4";
    st["H"]="44";
    st["I"]="444";
    st["J"]="5";
    st["K"]="55";
    st["L"]="555";
    st["M"]="6";
    st["N"]="66";
    st["O"]="666";
    st["P"]="7";
    st["Q"]="77";
    st["R"]="777";
    st["S"]="7777";
    st["T"]="8";
    st["U"]="88";
    st["V"]="888";
    st["W"]="9";
    st["X"]="99";
    st["Y"]="999";
    st["Z"]="9999";
    string ans="";
    for(int i=0;i<S.size();i++)
    {
        
         string key(1, S[i]); 
         if(key==" ")
         {
             ans+="0";
         }
         else{
             auto it=st.find(key);
        
        if(it!=st.end())
        ans+=it->second;
       
             
         }
        
        
    }
    return ans;
                          
    
}
