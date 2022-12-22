#include <stdio.h>
#include <ctype.h>

char str1[]= "Happy Birthday Brian";char str2[]= "BRaIN day th Happy BiR";

int compare_char_array(char *arr1, char *arr2)
{
    //Source: https://stackoverflow.com/questions/27495346/compraring-char-array-without-using-strcmp-in-c
    int i;
    int response = 0;
    i = 0;
    while(arr1[i] == arr2[i] && response == 0 )
    {
        if(arr1[i] == '\0' || arr2[i] == '\0'){
            response = 1;
        }
        i++;
    }
    return response;
}

int main()
{
    printf(" '%s' and  '%s' are\n",str1,str2);

    //lowercase & replace spaces in char arrays
    int len_str1 = sizeof(str1)/sizeof(str1[0]);
    int len_str2 = sizeof(str2)/sizeof(str2[0]);
    printf("%i, %i \n",len_str1,len_str2);
    int i,j=0;
    for (i=0;i<=len_str1;i++)
    { 
        if (str1[i] ==' ')
        {
            for(j=i;j<len_str1;j++)
            {
                str1[j] = str1[j+1];
            }
            len_str1--;
        }
        str1[i] = tolower(str1[i]); 
    }

    for (i=0;i<=len_str2;i++)
    { 
        if (str2[i] ==' ')
        {
            for(j=i;j<len_str2;j++)
            {
                str2[j] = str2[j+1];
            }
            len_str2--;
        }
        str2[i] = tolower(str2[i]); 
    }

    printf(" '%s' and  '%s'\n",str1,str2);
    printf("%i, %i \n",len_str1,len_str2);
    //Check if strings are the same length and sorted strings are the same
    if(len_str1!=len_str2){
        printf("not anagrams. Strings are not the same length.");
    }else{
        //sort first char array
        for(i=0;i<len_str1-1;i++)
        {
            for (j = i + 1; j < len_str1; j++)
            {
                if(str1[j]>str1[i])
                {
                    char arrtemp = str1[i];
                    str1[i] = str1[j];
                    str1[j] = arrtemp;
                }
            }
        }
        //sort second char array
        for(i=0;i<len_str2-1;i++)
        {
            for (j = i + 1; j < len_str2; j++)
            {
                if(str2[j]>str2[i])
                {
                    char arrtemp = str2[i];
                    str2[i] = str2[j];
                    str2[j] = arrtemp;
                }
            }
        }
        printf(" '%s' and  '%s' are\n",str1,str2);
        
        if (compare_char_array(&str1,&str2) == 1) 
        {
            printf("anagrams.");
        }
        else
        {
            printf("not anagrams.");
        }
    }
    return 0;
}

