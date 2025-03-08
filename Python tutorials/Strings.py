#concatenation
print("Hello"+"World")                               #will add both the strings

#length of the string
a="This is a code to check the length of the string"
print(len(a))                                        #this will also include the blank spaces.

#slicing
str="PythonLanguage"
print(str[1:4])
print(str[ :4])
print(str[1: ])

#string count
str="Python is a high level general purpose language"
print(str.count('a'))

#string find
str="Python is a high level language. It is also a general purpose language"
print(str.find('is'))

#replace function
str="Python is a high level general purpose language"
print(str.replace('language','programming language'))