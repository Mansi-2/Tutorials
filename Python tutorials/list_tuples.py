#WAP to print a list of three favourite movies of the user

movie=[]
mov1=input("Enter name of your first favourite movie : ")
mov2=input("Enter name of your second favourite movie : ")
mov3=input("Enter name of your third favourite movie : ")
movie.append(mov1)
movie.append(mov2)
movie.append(mov3)
print("The three favourite movies are : ",movie)

#Create a tuple with different datatypes
tup=(23,6,"Hello",26.4,8.90,"c")
print(type(tup))
print(tup)

#Create a tuple of numbers and print an item 
tup1=(23,45,78,0,12,47,63,28,56)
print(tup1[2])
