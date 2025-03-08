# # 1. Check whether entered number is even or odd

# num=int(input("Enter any number: "))
# if(num%2==0):
#     print("The number entered is EVEN")
# else:
#     print("The number entered is ODD")    


# # 2. Find the greatest of three numbers entered by the user

# num1=float(input("Enter first number: "))
# num2=float(input("Enter second number: "))
# num3=float(input("Enter third number: "))
# if(num1==num2==num3):
#     print("All the three numbers entered are equal")
# if(num1>num2 and num1>num3):
#     print(num1," is the greatest")
# elif(num2>num1 and num2>num3):
#     print(num2," is the greatest")
# else:
#     print(num3," is the greatest")        


# # 3. Check whether the entered number is a multiple of the 7

# num=int(input("Enter the number: "))
# if(num%7==0):
#     print(num," is a multiple of 7")
# else:
#     print(num," is not the multiple of 7")


# # 4. Take a three digit number and print sum of those digits

# num=int(input("Enter a three digit number : "))
# a=num//100
# b=num//10%10
# c=num%10
# print(a,b,c)
# sum=a+b+c
# print(sum)

# # 5. Take a four digit number and print sum of those digits

# num=int(input("Enter a four digit number : "))
# a=num//1000
# b=num//100%100%10
# c=num%100//10
# d=num%100%10
# sum=a+b+c+d
# print(sum)


# # 6. Check whether a list is a palindrome or not

# l1=[1,2,3,2,1]
# l2=["a","b","c","a"]

# copy_l1=l1.copy()
# copy_l2=l2.copy()

# copy_l1.reverse()
# copy_l2.reverse()

# if(copy_l1==l1):
#     print(l1," is a palindrome")

# else:
#     print(l1," is not a palindrome")

# if(copy_l2==l2):
#     print(l2," is a palindrome")

# else:
#     print(l2," is not a palindrome")  =  


# # 7. Print factorial of any number entered

# num=int(input("Enter any number : "))
# factorial=1

# for i in range(1,num+1):
#     factorial=factorial*i

# print("The factorial of ",num," is ",factorial)





n = int(input("Enter the number of elements: "))
t = tuple(map(int, input("Enter the elements: ").split()))
print(hash(t))
