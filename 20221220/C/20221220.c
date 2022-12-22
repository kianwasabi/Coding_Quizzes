/*
---- 2022/12/20 ----
Q: How to find out if given two strings are anagrams or not? 
Hints: 
First, lowercase all characters and delete all spaces and sort them. 
Check if the length of both strings is the same. If not, they cannot be anagrams. 
Check if the sorted arrays are equal. If they are equal, they are anagrams. 
*/


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int lowercase_replace_spaces_in_char_array(char *arr)
{
    int len_arr = strlen(arr);
    int i,j=0;
    for (i=0;i<=len_arr;i++)
    { 
        if (arr[i] ==' ')
        {
            for(j=i;j<len_arr;j++)
            {
                arr[j] = arr[j+1];
            }
            len_arr--;
        }
        arr[i] = tolower(arr[i]); 
    }
    return len_arr; 
}

void sort_char_array(int len_arr,char* arr)
{
    int i,j=0;
    for(i=0;i<len_arr-1;i++)
        {
            for (j = i + 1; j < len_arr; j++)
            {
                if(arr[j]>arr[i])
                {
                    char arrtemp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = arrtemp;
                }
            }
        }
}

int main()
{
    char str1[]= "Happy Birthday Brian";
    char str2[]= "dayBirth Hap iaNBr py";
    printf(" '%s' and  '%s'\n",str1,str2);
    //lowercase & replace spaces in char arrays
    int len_str1 = lowercase_replace_spaces_in_char_array(&str1[0]);
    int len_str2 = lowercase_replace_spaces_in_char_array(&str2[0]);
    //sort char arrays
    sort_char_array(len_str1,&str1[0]);
    sort_char_array(len_str2,&str2[0]);
    //Check if char arrays are the same length and sorted content is the same
    if((len_str1==len_str2)&&(strcmp(str1,str2)==0)){
        printf("are anagrams.");
    }else{
        printf("are not anagrams.");
        }
    return 0;
}

/*
    Comparing char array without using strcmp from string.h ->
    https://stackoverflow.com/questions/27495346/compraring-char-array-without-using-strcmp-in-c
*/