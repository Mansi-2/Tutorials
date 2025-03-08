# age=int(input("Enter your age: "))
# if(age>=18):
#     print("Eligible to vote")
# else:
#     print("Not eligible to vote")


marks=float(input("Enter your total marks: "))
if(marks>=90):
    Grade='A'
elif(marks>=80 and marks<90):
    Grade='B'
elif(marks>=60 and marks<80):
    Grade='C'
elif(marks>=45 and marks<60):
    Grade='D'
else:
    Grade='E'

print("Grade:",Grade)                    

if(Grade=='A'or Grade=='B' or Grade=='C' or Grade=='D'):
    print("PASS")
else:
    print("FAIL")        