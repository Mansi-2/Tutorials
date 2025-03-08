# Print table from 1 to 10
for i in range(1,11):
    for j in range(1,11):
        print(i," x ",j," = ",i*j)


# Print fibonacci series (0,1,1,2,3,5,8,13,...)
n=int(input("Enter number of terms that you want in Fibonacci series : "))
first_term=0
second_term=1
print("Fibonacci Series : ",first_term,second_term,end=" ")
for i in range(2,n):       
    new_term = first_term + second_term
    first_term = second_term
    second_term = new_term
    print(new_term,end=" ")   

# Check if a given number is a armstrong number or not

num=int(input("Enter a three digit number : "))
a=num//100
b=num//10%10
c=num%10
sum=0
count=0
list=[a,b,c]
power=len(list)
for i in list:
    i=i**power
    count=i
    sum=sum+count    
if sum==num:
    print(num," is an Armstrong number")
else:
    print(num," is not an Armstrong number")    


# Check the number of elements that are even and odd in a list

list=[2,5,7,8,3,4,6,12,45,67,87,56,90]
count_even=0
count_odd=0
for i in list:
    if i%2==0:
        count_even=count_even+1
    else:
        count_odd=count_odd+1

print("Number of even elements in the list is = ",count_even)
print("Number of odd elements in the list is = ",count_odd)


# Check if the input entered by the user is a palindrome or not

num = input("Enter a number: ")
reverse_num = 0

for i in range(len(num) - 1, -1, -1):
    reverse_num = reverse_num + num[i]

if num == reverse_num:
    print(num," is a palindrome")
else:
    print(num," is not a palindrome")


#Accept a word from user and reverse it

word = input("Enter a word: ")
reversed_word = ""

for i in range(len(word) - 1, -1, -1):
    reversed_word = reversed_word + word[i]

print("The reversed word is : ",reversed_word)

