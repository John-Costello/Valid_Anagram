public class Main
{
    public static void main(String[] args)
    {   
       String word1="ate";
       String word2="eat";
       String result;
       if(new Solution().isAnagram(word1, word2))
       {
           result="are an anagram of eachother.";
       }
       else
       {
           result="are not an anagram of eachother.";
       }
       System.out.println("The words, '"+word1+"' and '"+word2+"' "+result);
       
       word1="dog";
       word2="fog";
       if(new Solution().isAnagram(word1, word2))
       {
           result="are an anagram of eachother.";
       }
       else
       {
           result="are not an anagram of eachother.";
       }
       System.out.println("The words, '"+word1+"' and '"+word2+"' "+result);
    }
}
