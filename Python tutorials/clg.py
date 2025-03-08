num=int(input("Enter any number : "))
fact = (lambda f: lambda n : 1 if n==0 else n*f(f)(n-1))
print(fact(5)) 