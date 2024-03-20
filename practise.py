n1 = 5
n2 = 3
n1 *= n2
print(n1,n2)
n1 -= n2

exp1 = 2>1
exp2 = 3>4
print("exp1 and exp2", exp1 and exp2) 
print("exp1 or exp2", exp1 or exp2) 
print("not exp", not(exp1))
print("notexp2", not(exp2))
name1 = 23
name2 = 23
print("The two variables", name1 is name2)
rollno = 13
studentno = 100
print("The two variables are ", rollno is not studentno)
vowels = ["a", "ë", "i", "o", "u"] 
print("a is a vowel", "a" in vowels)     
#R = float(input("Enter the radius of sphere "))
Volumeofsphere = (2 / 3) * 3.14 * (R **3)
#print("The volume of the sphere is ", Volumeofsphere)
#Typecasting
a = 1
b = 2
c = 3

a_str = str(a)
b_str = str(b)
c_str = str(c)

final_str = a_str + b_str + c_str
final_int = int(final_str)
print("Final string", final_int, type(final_int))
