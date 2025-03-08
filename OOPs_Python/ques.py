# # WAP to print factorial if number is not prime otherwise display table of the number if it is prime in fibonacci series
# class fib_series:
#     def cal_fac(self,num):
#         self.fact=1
#         for i in range((num),1,-1):
#             self.fact*=i
#         print("Factorial of ",num," is ",self.fact," and it is a non-prime number")
#     def table(self,num):
#         self.n=1
#         print(num," is a prime number")
#         for j in range(1,11):
#             self.n=num*j
#             print(self.n)
        

# sol=fib_series() 

# def prime(num):
#     if num <= 1:
#         return False
#     for i in range(2, int(num**0.5) + 1):
#         if num % i == 0:
#             return False
#     return True

# f=[0,1,1,2,3,5,8,13,21]
# for i in f:
#     if i>1:  
#         if prime(i):
#             sol.table(i)
#         else:
#             sol.cal_fac(i)
#     else:
#         print(i," is neither prime nor composite")
                


# WAP to print the pattern 
# A a B b C
#   A a B b
#     A a B
#       A a
#         A


for i in range(65,70):
    for j in range(65,i+1):
        if (j % 2 !=0):
            print(chr(j).upper(),end=" ")
        else:
            print(chr(j).lower(),end=" ")
    print() 