def main():
    str1 = "Chri  stmas"
    str2 = "RichtMass"
    print(f"String 1: {str1}")
    print(f"String 1: {str2}")
    #Lowercase & Replace Spaces from String
    str1 = str1.lower().replace(" ","") 
    str2 = str2.lower().replace(" ","") 
    #Check if Strings are the same length
    if (len(str1)==len(str2)):
        #Check if sorted Strings are the same
        if (sorted(str1)==sorted(str2)): 
            print("Strings are anagrams.")
    else:
        print(f"Strings cannot be anagrams. Strings are not the same length.")

if __name__== "__main__":
    main()