def calculateChocolatesForSakahiMane(money):
    chocolates = money
    wrappers = chocolates

    while wrappers >= 3:
        chocolates += wrappers // 3
        wrappers = wrappers // 3 + wrappers % 3

    return chocolates


money = int(input("How much money do you have: "))
result = calculateChocolatesForSakahiMane(money)
print(f"You can get {result} chocolates for {money} rupees.")
