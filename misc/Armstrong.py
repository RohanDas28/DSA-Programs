#Write a program to take a number and check the number is armstrong or not using with parameters and return 

a = int(input("Enter the number: "))
def armstrong(a):
    temp = a
    sum = 0
    while temp > 0:
        b = temp % 10
        sum = sum + b ** 3
        temp = temp // 10
    if a == sum:
        return 1
    else:
        return 0
d = armstrong(a)
if d == 1:
    print("Armstrong")
else:
    print("Not Armstrong")

