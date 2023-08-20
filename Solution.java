import java.util.Arrays;

class Solution
{
    public boolean isAnagram(String s, String t) {
        char[] sCharArray = new char[s.length()];
        char[] tCharArray = new char[t.length()];
        for(int i=0; i<s.length(); i++) sCharArray[i]=s.charAt(i);       
        for(int i=0; i<t.length(); i++) tCharArray[i]=t.charAt(i);      
        Arrays.sort(sCharArray);
        Arrays.sort(tCharArray);
        String sSorted="";
        String tSorted="";
        for(char c: sCharArray) sSorted+=c;
        for(char c: tCharArray) tSorted+=c;
        return(sSorted.equals(tSorted));
    }
}
