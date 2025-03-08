#      *
#     * *
#    * * *
#   * * * *
#  * * * * *
# * * * * * *

row=int(input("Enter number of rows : "))
spaces=(2*row)-2
for i in range(0,row):
    for j in range(0,spaces):
        print(" ",end="")
        spaces=spaces-1
    for k in range(0,i+1):
        print("*",end="")
    print()    




# #    * * * *
# #    * * *
# #    * *
# #    *

# row=int(input("Enter number of rows : "))
# for i in range(row+1,1,-1):
#     for j in range(i-1,1,-1):
#         print("*",end=" ")
#     print()





# #    *
# #    * *
# #    * * *
# #    * * * *

# row=int(input("Enter the number of rows : "))

# for i in range(row+1):
#     for j in range(i+1):
#         print("*",end=" ")
#     print('')  