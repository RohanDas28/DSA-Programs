# wap to take basic salary as input.DA is 15% of basic salary.HRA is 13% of BS.TA is 10% of basic salary. If the gross salary is above 30000 then 10% tax will be deduct.What is the gross salary

a = int(input("Enter basic salary:"))
da = 0.15*a
hra = 0.13*a
ta = 0.1*a
gross = a+da+hra+ta
if gross > 30000:
    tax = 0.1*gross
    gross = gross-tax
    print("Gross salary is:", gross)
else:
    print("Gross salary is:", gross)
