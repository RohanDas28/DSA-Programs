# wap to take a list of 10 number and calculate even or odd.After calculate all even no stored in 1 list and stored odd numbers in another list and display them.
a = []
b = []
c = []
for i in range(10):
    a.append(int(input("Enter a number:")))
for i in a:
    if i % 2 == 0:
        b.append(i)
    else:
        c.append(i)
print("Even numbers are:", b)
print("Odd numbers are:", c)
