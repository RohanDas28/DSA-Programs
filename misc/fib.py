# Write a program to display nth term of fibonacci series where n is given by user

a=0
b=1
x=int(input("Enter the no.of Fibonacci to be generated: "))
print(x)
if x<=0:
    print("The entered value must be positive!, Try Again")
elif x==1:
    print(x)
elif x>=2:
    print("{},{}".format(a,b), end='')
    for i in range (2,x):
        c=a+b
        print(",{}".format(c), end='')
        a=b
        b=c
