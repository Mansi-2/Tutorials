#    1
#    1 2 
#    1 2 3  
#    1 2 3 4

row=int(input("Enter number of rows : "))
for i in range(1,row+1):
    for j in range(1,i+1):
        print(j,end=" ")
    print('')   


    


#    1
#    0 0 
#    1 1 1
#    0 0 0 0

row=int(input("Enter the number of rows : "))
for i in range(1,row+1):
    for j in range(1,i+1):
        if i%2==0:
            print(0,end=" ")
        else:
            print(1,end=" ")
    print()

         #OR

row=int(input("Enter the number of rows : "))
for i in range(1,row+1):
    for j in range(1,i+1):
        print((i%2),end=" ")
    print()





#   5
#   4 5
#   3 4 5
#   2 3 4 5
#   1 2 3 4 5

row=int(input("Enter the number of rows : "))
for i in range(row,0,-1):
    for j in range(i,row+1):
        print(j,end=" ")
    print()    





#    5
#    4 4 
#    3 3 3
#    4 4 4 4
#    5 5 5 5 5

row=int(input("Enter the number of rows : "))
for i in range(1,row+1):
    for j in range(1,i+1):
        if i==1:
            print(row,end=" ")
        elif i==2:
            print(row-1,end=" ")
        else: 
            print(i,end=" ")
    print()          





#     5
#     5 4
#     5 4 3
#     5 4 3 2
#     5 4 3 2 1

row=int(input("Enter the number of rows : "))
for i in range(row,0,-1):
    for j in range(row,i-1,-1):
        print(j,end=" ")
    print()    





#     5
#     4 4
#     3 3 3
#     2 2 2 2
#     1 1 1 1 1

row=int(input(" Enter number of rows :" ))
for i in range(row,0,-1):
    for j in range(row,i-1,-1):
        print(i,end=" ")
    print()    





#     5 5 5 5 5
#     4 4 4 4
#     3 3 3
#     2 2
#     1

row=int(input("Enter number of rows : "))
for i in range(row,0,-1):
    for j in range(i,0,-1):
        print(i,end=" ")
    print()    






#     5 4 3 2 1
#     4 3 2 1
#     3 2 1
#     2 1
#     1

row=int(input("Enter number of rows : "))
for i in range(row,0,-1):
    for j in range(i,0,-1):
        print(j,end=" ")
    print()   





#     1 2 3 4 5
#     1 2 3 4
#     1 2 3
#     1 2
#     1

row=int(input("Enter number of rows : "))
for i in range(row,0,-1):
    for j in range(1,i+1):
        print(j,end=" ")
    print()   





#     1 1 1 1 1 
#     2 2 2 2
#     3 3 3
#     4 4
#     5

row=int(input("Enter number of rows : "))
num=0
for i in range(row,0,-1):
    num=num+1
    for j in range(1,i+1):
        print(num,end=" ")
    print()    





#     1
#     2 1
#     3 2 1
#     4 3 2 1
#     5 4 3 2 1

row=int(input("Enter number of rows : "))
for i in range(1,row+1):
    for j in range(i,0,-1):
        print(j,end=" ")
    print() 





#     1
#     2 2
#     3 3 3
#     4 4 4 4
#     5 5 5 5 5

row=int(input("Enter number of rows : "))
for i in range(1,row+1):
    for j in range(i,0,-1):
        print(i,end=" ")
    print()         





#             1
#           2 1
#         3 2 1
#       4 3 2 1
#     5 4 3 2 1

row=int(input("Enter number of rows : "))
for i in range(1,row+1):
    num=1
    for j in range(row,0,-1):
        if j>i:
            print(" ",end=" ")
        else:
            print(j,end=" ")
    print()   


     
