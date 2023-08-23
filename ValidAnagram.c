#include <stdio.h>
#include <stdlib.h>

int isAnagram(char* s, char* t);
char* sortArray(char* s);
int equals(char * s, char * t);
int lengthOfString(char* s);
char charAt(char* s, int n);

int main()
{
   char* word1="ate";
   char* word2="eat";
   char* result;
   if(isAnagram(word1, word2)==0) result="are not an anagram of eachother.\n";
   else result="are an anagram of eachother.\n";
   printf("The words, '%s' and '%s' %s",word1 , word2, result);

   word1="dog";
   word2="fog";
   if(isAnagram(word1, word2)==0) result="are not an anagram of eachother.\n";
   else result="are an anagram of eachother.\n";
   printf("The words, '%s' and '%s' %s",word1 , word2, result);
   
   return(0);
}

int isAnagram(char* s, char* t)
{
   int sLength=lengthOfString(s);
   int tLength=lengthOfString(t);
   char sCharArray[sLength+1];
   char tCharArray[tLength+1];
   for(int i=0; i<sLength; i++)sCharArray[i]=charAt(s, i);
   sCharArray[sLength]='\0';
   for(int i=0; i<tLength; i++)tCharArray[i]=charAt(t, i);
   tCharArray[tLength]='\0';
   char* sSorted = sortArray(sCharArray);
   char* tSorted = sortArray(tCharArray);
   return equals(sSorted,tSorted);
}

char* sortArray(char* s)
{
   int sLength=lengthOfString(s);
   char* c_array=malloc((sLength+1)*sizeof(char));
   for(int i=0; i<sLength+1; i++)
   {  
      if(i<sLength)
      {
         c_array[i]=*s;
         *s++;
      }
      else  // if(i==sLength)
      {
         c_array[i] = '\0';
      }
   }
   
   for(int i=sLength-1; i>0; i--)
   {
      for(int j=i; j>0; j--)
      {
         if(c_array[j]<c_array[j-1])
         {
            char tempChar = c_array[j];
            c_array[j] = c_array[j-1];
            c_array[j-1] = tempChar;  
         }
      }
   }
   return c_array;
}

int equals(char* s, char* t)
{
   int stillEqual=1;
   int lenOfString;
   if((lenOfString=lengthOfString(s))!=lengthOfString(t))
   {
      stillEqual=0;
   }
   else
   {
      for(int i=0; i<lenOfString; i++)
      {
         if((*s++)!=(*t++))
         {
            stillEqual=0;
            break;
         }
      }
   }
   return(stillEqual);
}

int lengthOfString(char* s)
{
   int count=0;
   while(*s!='\0'){count++;*s++;}
   return count;
}

char charAt(char* s, int n)
{ 
   int lenOfString=lengthOfString(s);
   char c='\0';
   if(n<lenOfString)
   {
      for(int i=0; i<n; i++)*s++;          
   } 
   c=*s;
   return c;
}