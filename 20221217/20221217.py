#---- 2022/12/17 ----
#Q: Swap two numbers (e.g. a=3 and b=5) without a third variable. 

def main():
    a=3
    b=5
    print(f"a={a},b={b}")
    a=a-b 
    b=a+b 
    a=(-a)+b
    print(f"a={a},b={b}")
if __name__== "__main__":
    main()