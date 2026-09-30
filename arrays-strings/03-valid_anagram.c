#include<stdio.h>
#include<string.h>

bool isAnagram(char* s, char* t) {
    if(strlen(s)!=strlen(t))
    {
        return false;
    }
    
    int counts[26]={0};
    
    for(int i=0;s[i]!='\0';i++)
    {
        counts[s[i]-'a']++;
        counts[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(counts[i]!=0)
        return false;
    }
    return true;
}

int main()
{
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("s1 and t1  %s %s are anagrams(%s)",s1,t1,isAnagram(s1,t1)?"true":"false");
    return 0;
}