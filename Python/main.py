def palindrome(x):
    # if 
    #     print("Enter a number")
    n = x[::-1]
    if n == x:
        return "true"
    else:
        return "false"
x = input()
print(palindrome(str(x)))