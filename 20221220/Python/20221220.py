#---- 2022/12/20 ----
# Q: How to find out if given two strings are anagrams or not? 
# Hints: 
# First, lowercase all characters and delete all spaces and sort them. 
# Check if the length of both strings is the same. If not, they cannot be anagrams. 
# Check if the sorted arrays are equal. If they are equal, they are anagrams. 

def main():
    str1 = "Happy Birthday Brian"
    str2 = "BRaIN day th Happy Bir"
    print(f"'{str1}'and '{str2}' are")
    #Lowercase & replace spaces in strings
    str1 = str1.lower().replace(" ","") 
    str2 = str2.lower().replace(" ","") 
    #Check if strings are the same length and sorted strings are the same
    if ( (len(str1)==len(str2)) & (sorted(str1)==sorted(str2)) ):
        print(f"anagrams.")
    else:
        print(f"not anagrams.")

if __name__== "__main__":
    main()