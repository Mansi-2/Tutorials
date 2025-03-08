#Membership Operators
#1. IN- returns TRUE if found the sequence in given content otherwise returns FALSE
str="How are you?"
print("How" in str)
print("how" in str)
print("ar" in str)
print(" you" in str)
print("  you ?" in str)
#2. NOT IN- returns TRUE if not found the sequence in given content otherwise returns FALSE
str="How are you?"
print("How" not in str)
print("how" not in str)
print("ar" not in str)
print(" you" not in str)
print("  you ?" not in str)

#Identity Operators
c=10
d=20
e=10
#1. IS- it returns TRUE if the two objects are same or have the same memory location else returns FALSE
print(c is d)
print(c is e)
#2. IS NOT- it returns FALSE if the two objects are having same memory location or are same else returns TRUE
print(c is not d)
print(c is not e)



#Swapping two numbers using third variable
a=int(input("Enter the first number: "))
b=int(input("Enter the second number: "))
print("Value of a before swapping= ",a)
print("Value of b before swapping= ",b)
c=b
b=a
a=c
print("Value of a after swapping= ",a)
print("Value of b after swapping= ",b)

#swapping two numbers without using third variable
a=int(input("Enter the first number: "))
b=int(input("Enter the second number: "))
print("Value of a before swapping= ",a)
print("Value of b before swapping= ",b)
a=a*b
b=a/b
a=a/b
print("Value of a after swapping= ",a)
print("Value of b after swapping= ",b)