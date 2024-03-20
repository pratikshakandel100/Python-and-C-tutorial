num1 = int(input("Enter a number"))
num2 = int(input("Enter a number"))
operator = input("Enter a operator")
match operator:
    case "+":
        print("The sum of num1 and num2 is ", num1 + num2)
    case "-":
        print("The difference is ", num1 - num2)
    case "*":
        print("The producet is ", num1 * num2)
    case _:
        print("Enter another operator")

            
