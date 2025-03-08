class Factorial:
    def num(self):
        self.num=int(input("Enter any number : "))
    def cal_fac(self):
        self.fact=1
        for i in range(self.num,1,-1):
            self.fact*=i
    def result(self):
        print("Factorial of ",self.num," is ",self.fact)     

f1=Factorial()
f1.num()
f1.cal_fac()
f1.result()