# # Create a class and object to store roll number and name of students

# class Student:
#     def accept(self):
#         self.roll_no=int(input("Enter the roll number : "))
#         self.name=input("Enter the name of student : ")

#     def print(self):
#         print("The roll number is ",self.roll_no," and name of the student is ",self.name)

# stu1=Student()
# stu1.accept()
# stu1.print()

# stu2=Student()
# stu2.accept()
# stu2.print()

# # Program to accept and display employee record

# class Employee:
#     def data(self):
#         self.empid=int(input("Enter the employee ID : "))
#         self.empname=input("Enter the name of the employee : ")
#         self.empsalary=int(input("Enter the salary (in Rs) : "))
#         self.jobprofile=(input("Enter the job profile : "))

#     def display(self):
#         print("The employee ID is ",self.empid,". Name of the employee is ",self.empname,". He/She works as a ",self.jobprofile," with a salary of Rs.",self.empsalary)


# emp1=Employee()
# emp1.data()
# emp1.display()


# emp2=Employee()
# emp2.data()
# emp2.display()


class SI:
    def accept(self):
        self.p= int(input("Enter the principal amount : "))
        self.r= float(input("Enter the rate of interest : "))
        self.t= float(input("Enter duration (in years) : "))

    def cal_SI(self):
        self.si=(self.p*self.r*self.t)/100

    def result(self):
        print("Simple Interest on Rs.",self.p,"at the rate of",self.r,"%"+" for",self.t,"years is",self.si)

s1=SI()
s1.accept()
s1.cal_SI()
s1.result()
