//to check if a given string is a palindrome.

//solution:using two pointer to check if string match .
bool isPalindrome(string& s) {
int i=0;
int j=s.size()-1;
while(i<=j)
{
  if(s[i]!=s[j])
  {
    return false;
  }
      
}
  return true;
}
