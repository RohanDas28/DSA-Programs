#wap to find the roots of a quadratic equation

a=int(input("Enter the value of a: "))
b=int(input("Enter the value of b: "))
c=int(input("Enter the value of c: "))
d=(b**2)-(4*a*c)
if d>0:
    print("Roots are real and distinct")
    r1=(-b+(d**0.5))/(2*a)
    r2=(-b-(d**0.5))/(2*a)
    print("Roots are",r1,"and",r2)
elif d==0:
    print("Roots are real and equal")
    r1=r2=-b/(2*a)
    print("Roots are",r1,"and",r2)
else:
    print("Roots are imaginary")

