#Find the median among three given numbers
#i.e second largest number

x = input("Input the first number")
y = input("Input the second number")
z = input("Input the third number")
print("Median of the above three numbers -")

if y < x and x < z:
    print(x)
elif z < x and x < y:
    print(x)
    
elif z < y and y < x:
    print(z)
elif x < y and y < z:
    print(z)
    
elif y < z and z < x:
    print(y)    
elif x < z and z < y:
    print(y)
