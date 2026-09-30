#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize){
    if(strsSize==0)
    {
        char * result=malloc(1);
        result[0]='\0';
        return result;
    }

    int prefixlen=strlen(strs[0]);
    char *prefix=(char*)malloc(prefixlen+1);
    strcpy(prefix,strs[0]);

    for(int i=1;i<strsSize;i++)
    {
        while(strncmp(prefix,strs[i],strlen(prefix))!=0)
        {
            prefixlen--;
            prefix[prefixlen]='\0';
            if(prefixlen==0)
            {
                return prefix;
            }

        }
    }
    return prefix;
}
int main()
{
    char* test1[] = {"flower", "flow", "flight"};
    int size1 = sizeof(test1) / sizeof(test1[0]);
    char* result1 = longestCommonPrefix(test1, size1);
    printf("Test 1 Result: %s ", result1);
    free(result1);
    
    return 0;
}