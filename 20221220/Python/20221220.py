def main():
    str1 = "Happy Birthday Brian"
    str2 = "BRaIN day th Happy Bir"
    print(f"'{str1}'and '{str2}' are")
    #Lowercase & replace spaces in strings
    str1 = str1.lower().replace(" ","") 
    str2 = str2.lower().replace(" ","") 
    #Check if strings are the same length and sorted strings are the same
    same_length = (len(str1)==len(str2))
    same_sorted = (sorted(str1)==sorted(str2))
    if (same_length&same_sorted):
        print(f"anagram strings.")
    else:
        print(f"not anagram strings.")

if __name__== "__main__":
    main()