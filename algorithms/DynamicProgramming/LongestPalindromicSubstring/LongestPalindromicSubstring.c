#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool isPalindromic(char *s,int start,int end)
{

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}



char* longestPalindrome(char* s)
{
    int i,j,k,len,maxLen,tmpLen;
    bool res;
    len = strlen(s);

    if (len <= 0)
    {
        return "";
    }
    char *ret = (char *)calloc(1001,sizeof(char));
    ret[0] = s[0];
    maxLen = 1;

    for (i = 0; i < len; i++)
    {
        for (j = i+1; j < len; j++)
        {

            res = isPalindromic(s,i,j);
            tmpLen = j - i;

            if (res && tmpLen >= maxLen)
            {
                maxLen = tmpLen;
                int count = 0;
                for (k = i; k <=j; k++)
                {
                    ret[count] = s[k];
                    count++;
                }
            }

        }
    }
    return ret;
}

/*
	for debug you can look it.  it print all sequence.
	And I Mmeet the case of
	Input "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg"
	
	Output: "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"
	
	Expected "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"
	
	?????????????????????????????????????????????????????????leetcode???????????????????????????????????????malloc ??????????????????????????????????????????malloc ????????????calloc ???????????????????????????
	??????????????????????????????912ms?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????.
	
	bool isPalindromic(char *s,int start,int end)
{

    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

char* longestPalindrome(char* s)
{
    int i,j,k,len,maxLen,tmpLen;
    bool res;
    len = strlen(s);

    if (len <= 0)
    {
        return NULL;
    }
    char *ret = malloc(sizeof(char) * 1001);
    ret[0] = s[0];
    maxLen = 1;

    for (i = 0; i < len; i++)
    {
        //????????????????????????????????????
        printf("%c\n",s[i]);
        for (j = i+1; j < len; j++)
        {


            for (k = i; k <=j; k++)
            {
                // ???????????????????????????
                printf("%c",s[k]);
            }
            printf("\n");
        }
    }
    return ret;
}

	
*/


int main()
{
    char *result = malloc(sizeof(char) * 1001);
    //???????????????
    char s[] = "babad";

    result = longestPalindrome(s);
    printf("%s",result);
    // ?????????????????????????????????????????????



    return 0;
}



