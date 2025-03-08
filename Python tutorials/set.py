s1={23,20.5,25,"Hello",5,1,6,"v"}
s2={56,67,2,4,"a","Hii",90,76}

#remove()
s1.remove(20.5)
print(s1)

#discard()
s2.discard(67)
print(s2)
s2.discard(100)
print(s2)

#pop
s1.pop()
print(s1)
s2.pop()
print(s2)

#update()
s1.update(s2)
print(s1)

#add
s1.add(89)
print(s1)

#clear
s2.clear()
print(s2)
