#To find maximum and second maximum digit from a phone number entered by a user

# num=int(input("Enter 10-digit phone number : "))
# max=-1
# max2=-1

# while num>0:
#     digit=num%10
#     num=num//10

#     if digit>max:
#         max2=max
#         max=digit
#     elif digit>max2 and digit != max:
#         max2=digit

# print("The maximum digit in the phone number entered is : ",max)
# print("The second maximum digit in the phone number entered is : ",max2)    


#Abstraction Example
# class Bike:
#     _color="black"
#     def __init__(self,name):
#         self.acc=False
#         self.brk=False
    
#     def __print(self):
#         self.acc=True
#         self.brk=True
#         print("Bike Started")
    
# s1 = Bike("hero")
# print(Bike.color)
# s1.print()

# class A:
#     a=1000
#     def fun(self):
#         a=10
#         print(A.a)
#         print(a)
#         self.a=100
#     def fun1(self):
#         print(self.a)
#         print(A.a)

# obj = A()
# obj.fun()
# obj.fun1()
class Car:
    tyre = 4
    color = "black"

class Honda(Car):
    type="electirc"
HondaCity  = Honda()
print(HondaCity.tyre)
print(HondaCity.color)
print(HondaCity.type)


