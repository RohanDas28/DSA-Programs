with open("SP500.txt", "r") as file:
    new = file.readlines()
    closing_price = []
    interest_rate = []
    for x in new[6:18]:
        y = x.split(",")
        closing_price.append(y[1])
        interest_rate.append(y[5])
   
    sum_of_numbers = 0
    for each in closing_price:
        sum_of_numbers = sum_of_numbers + float(each)
   
    mean_SP = sum_of_numbers/len(closing_price)
    print(float(mean_SP))
    max_interest = 0
    for i in interest_rate:
        if float(i) > max_interest:
            max_interest = float(i)
    print(max_interest)
