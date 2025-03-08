#Write a program to count the frequency of each character in a string

# str=input("Enter a string : ")
# str = "shivam"
# count={}
# for char in str:
#     if char in count:
#         count[char]+=1
#     else:
#         count[char]=1

# print("Letter frequency : ")
# for char , count in count.items():
#     print(char ,":", count)





# Write a program to move all negative numbers on the left side of that list

# list=[2,5,-1,6,9,-8,-4,10,13,-15]
# left=0

# for i in range(len(list)):
#     if list[i]<0:
#         list[left],list[i]=list[i],list[left]
#         left += 1

# print("Reordered list with negative numbers at left is : ",list)





#Write a program to remove duplicates from the list


# list=[1,2,3,4,5,3,1,2]
# unique_list=[]

# for i in list:
#     if i not in unique_list:
#         unique_list.append(i)

# print("List after removing duplicate list is : ",unique_list)





# v=0
# c=0
# def count(i,s):
#     if (i==len(s)):
#         return v
#     if s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u':
#         v += 1
#     else:
#         c += 1
#     count(i+1,s)

# count(0,"shrishti")   
# print(v)
# print(c) 





list=[1,2,3,-1,-2,-3]
neg_list=[]
posi_list=[]
for num in list:
    if num<0:
        neg_list.append(num)
    else:
        posi_list.append(num)
new_list=neg_list+posi_list
print(new_list)